#!/usr/bin/env python3

import math
import threading
import time

import cv2
import numpy as np

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse

from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from lunabot_msgs.action import Localization


# convert ROS2 Images <-> OpenCV
from cv_bridge import CvBridge, CvBridgeError

def normalize_angle(angle):

    while angle > math.pi:
        angle -= 2.0 * math.pi
    while angle < -math.pi:
        angle += 2.0 * math.pi
    return angle


class LocalizationServer(Node):


    def __init__(self):
        super().__init__('localization_server')

        self.d455_tag_7_detected_ = False
        self.d455_tag_11_detected_ = False


        self.turn_direction_set_ = False
        self.turn_clockwise_ = False
        self.timer_started_ = False
        self.success_ = False

        self.lateral_distance_ = 0.0
        self.depth_distance_ = 0.0
        self.tag_7_yaw_ = 0.0

        self.twist = Twist()

        self.start_time_ = None

        self.d455_image_sub_ = self.create_subscription(
            Image,
            'd455/color/image_raw',
            self.d455_detect_apriltag,
            10
        )


        self.d455_overlay_pub_ = self.create_publisher(Image, 'd455/apriltag/overlay_image', 10)
        self.cmd_vel_pub_ = self.create_publisher(Twist, 'cmd_vel', 10)

        self._action_server = ActionServer(
            self,
            Localization,
            'localization_action',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback
        )

        self.timer_ = self.create_timer(0.1, self.localize)

        self.cv_bridge = CvBridge()

        self.get_logger().info("LocalizationServer node initialized.")

    # --------------------------------------------------------------------------
    # ACTION SERVER CALLBACKS
    # --------------------------------------------------------------------------
    def goal_callback(self, goal_request):

        self.get_logger().info("Localization goal request received.")
        return GoalResponse.ACCEPT_AND_EXECUTE

    def cancel_callback(self, goal_handle):

        self.get_logger().info("Cancel request received.")
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):

        self.get_logger().info("Localization action accepted. Starting...")

        self.success_ = False
        self.d455_tag_7_detected_ = False
        self.d455_tag_11_detected_ = False
        self.turn_direction_set_ = False
        self.turn_clockwise_ = False
        self.timer_started_ = False

        while rclpy.ok() and not self.success_:
            await self._sleep(0.1)

        if self.success_:
            result = Localization.Result()
            result.x = float(self.depth_distance_)
            result.y = float(-self.lateral_distance_ + 1.0)
            result.success = True

            self.get_logger().info(f"LOCALIZATION SUCCESS. (x={result.x:.2f}, y={result.y:.2f})")
            goal_handle.succeed(result)

        return result

    async def _sleep(self, seconds):

        end_time = self.get_clock().now().nanoseconds + int(seconds * 1e9)
        while rclpy.ok() and self.get_clock().now().nanoseconds < end_time:
            await rclpy.sleep(0.0)

    # --------------------------------------------------------------------------
    # MAIN LOGIC: localize() called every 100ms
    # --------------------------------------------------------------------------
    def localize(self):

        if not self.timer_started_:
            self.start_time_ = self.get_clock().now()
            self.timer_started_ = True

        if not self.turn_direction_set_:

            self.success_ = self.d455_tag_7_detected_
            self.turn_direction_set_ = True

        if self.success_:

            zero_twist = Twist()
            self.cmd_vel_pub_.publish(zero_twist)
            return

        self.twist.angular.z = 0.3 if self.turn_clockwise_ else -0.3
        self.twist.linear.x = 0.0


        if (self.d455_tag_7_detected_ and abs(normalize_angle(self.tag_7_yaw_)) < 0.025):
            self.success_ = True
            self.twist.angular.z = 0.0

        elapsed = (self.get_clock().now() - self.start_time_).nanoseconds * 1e-9
        if elapsed < 30.0:
            self.cmd_vel_pub_.publish(self.twist)
        else:
            self.get_logger().warn("\033[1;33mLOCALIZATION TIMED OUT after 30s.\033[0m")


    # --------------------------------------------------------------------------
    # IMAGE CALLBACKS: d455_detect_apriltag / 
    # --------------------------------------------------------------------------
    def d455_detect_apriltag(self, msg: Image):

        self.process_apriltag(
            msg,
            tag_7_detected_attr='d455_tag_7_detected_',
            tag_11_detected_attr='d455_tag_11_detected_',
            overlay_pub=self.d455_overlay_pub_,
            calculate_tag=True
        )


    # --------------------------------------------------------------------------
    # TAG DETECTION / IMAGE PROCESSING
    # --------------------------------------------------------------------------
    def process_apriltag(self, image_msg, tag_7_detected_attr, tag_11_detected_attr, overlay_pub, calculate_tag):

        try:
            cv_image = self.cv_bridge.imgmsg_to_cv2(image_msg, desired_encoding='bgr8')
        except CvBridgeError as e:
            self.get_logger().error(f"ERROR PROCESSING IMAGE: {e}")
            return

        # gaussianblur (THANK YOU GRAYSON <3)
        cv_image = cv2.GaussianBlur(cv_image, (5, 5), 0.8)

        output_img = cv_image.copy()

        # ArUco dictionary for AprilTag (36h11) (graysons, wec an chagne this later)
        dictionary = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_APRILTAG_36h11)

        corners, ids, _ = cv2.aruco.detectMarkers(cv_image, dictionary)
        if ids is None:
            setattr(self, tag_7_detected_attr, False)
            setattr(self, tag_11_detected_attr, False)
            return


        camera_matrix = np.array([
            [383.4185742519996, 0.0,                309.4326377845713],
            [0.0,                385.0909007102088, 240.749949733094],
            [0.0,                0.0,                1.0]
        ])
        distortion_coeffs = np.array([
            -0.06792929080519726, 
             0.08058277259698843,
            -0.001690544521662593,
            -0.0008235437909836152,
            -0.04417756393089296
        ])

        rvecs, tvecs, _ = cv2.aruco.estimatePoseSingleMarkers(corners, 0.235, camera_matrix, distortion_coeffs)


        for i, marker_id in enumerate(ids.flatten()):
            if marker_id == 7:
                setattr(self, tag_7_detected_attr, True)
            elif marker_id == 11:
                setattr(self, tag_11_detected_attr, True)

            if calculate_tag and marker_id == 7:
                self.calculate_distances(tvecs[i][0])
                self.calculate_yaw(rvecs[i][0])

        # Draw detection
        cv2.aruco.drawDetectedMarkers(output_img, corners, ids)
        # rvecs, tvecs are the same shape (N, 3), so we can draw axes
        for i in range(len(ids)):
            cv2.aruco.drawAxis(output_img, camera_matrix, distortion_coeffs, rvecs[i][0], tvecs[i][0], 0.1)

        try:
            overlay_msg = self.cv_bridge.cv2_to_imgmsg(output_img, encoding='bgr8')
            overlay_pub.publish(overlay_msg)
        except CvBridgeError as e:
            self.get_logger().error(f"ERROR PUBLISHING OVERLAY IMAGE: {e}")

    def calculate_distances(self, tvec):

        self.lateral_distance_ = tvec[0]
        self.depth_distance_   = tvec[2]

    def calculate_yaw(self, rvec):

        rotation_matrix, _ = cv2.Rodrigues(rvec)

        self.tag_7_yaw_ = math.asin(rotation_matrix[2, 0])
        self.tag_7_yaw_ = normalize_angle(self.tag_7_yaw_)


def main(args=None):
    rclpy.init(args=args)
    node = LocalizationServer()
    rclpy.spin(node)
    rclpy.shutdown()

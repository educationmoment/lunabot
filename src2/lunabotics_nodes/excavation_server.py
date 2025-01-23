#!/usr/bin/env python3

import math
import time
import threading
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse

from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from lunabot_msgs.action import Excavation

def normalize_angle(angle: float) -> float:
    while angle > math.pi:
        angle -= 2.0 * math.pi
    while angle < -math.pi:
        angle += 2.0 * math.pi
    return angle


class ExcavationServer(Node):
    def __init__(self):
        super().__init__('excavation_server')

        self.success_ = False
        self.goal_active_ = False
        self.alignment_done_ = False
        self.current_x_ = 0.0
        self.current_y_ = 0.0
        self.current_yaw_ = 0.0

        # PID STUFF!! TBD!!
        self.previous_error_ = 0.0
        self.error_sum_ = 0.0
        self.previous_time_ = self.get_clock().now()

        self.declare_parameter('kP', 7.0)
        self.declare_parameter('kI', 0.15)
        self.declare_parameter('kD', 3.0)

        self.cmd_vel_pub_ = self.create_publisher(Twist, 'cmd_vel', 10)

        self.odom_sub_ = self.create_subscription(
            Odometry, 'icp_odom', self.odometry_callback, 10
        )

        self._action_server = ActionServer(
            self,
            Excavation,
            'excavation_action',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
        )

        self.timer_ = self.create_timer(0.1, self.excavate)

    def goal_callback(self, goal_request):
        self.get_logger().info("Excavation goal request received.")
        return GoalResponse.ACCEPT_AND_EXECUTE

    def cancel_callback(self, goal_handle):
        self.get_logger().info("Cancel request received.")
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        self.get_logger().info("Excavation action started.")
        self.goal_active_ = True
        self.alignment_done_ = False
        self.success_ = False

        while rclpy.ok() and not self.success_:
            await self._sleep(0.1)

        if self.success_:
            result = Excavation.Result()
            result.success = True
            self.get_logger().info("Excavation succeeded.")
            goal_handle.succeed()
            return result

    async def _sleep(self, seconds: float):
        end_time = self.get_clock().now().nanoseconds + int(seconds * 1e9)
        while self.get_clock().now().nanoseconds < end_time and rclpy.ok():
            await self.__yield_once()

    async def __yield_once(self):
        await rclpy.sleep(0.0)

    def excavate(self):
        if not self.goal_active_:
            return



    def odometry_callback(self, msg: Odometry):
        self.current_x_ = msg.pose.pose.position.x
        self.current_y_ = msg.pose.pose.position.y

        qx = msg.pose.pose.orientation.x
        qy = msg.pose.pose.orientation.y
        qz = msg.pose.pose.orientation.z
        qw = msg.pose.pose.orientation.w

        siny_cosp = 2.0 * (qw * qz + qx * qy)
        cosy_cosp = 1.0 - 2.0 * (qy**2 + qz**2)
        self.current_yaw_ = math.atan2(siny_cosp, cosy_cosp)


def main(args=None):
    rclpy.init(args=args)
    node = ExcavationServer()
    rclpy.spin(node)
    rclpy.shutdown()

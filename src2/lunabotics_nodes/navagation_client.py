#!/usr/bin/env python3

import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.timer import WallTimer

from nav2_msgs.action import NavigateToPose
from lunabot_msgs.action import Localization
from lunabot_msgs.action import Excavation

from geometry_msgs.msg import Pose, PoseStamped


class NavigationClient(Node):


    def __init__(self):
        super().__init__('navigation_client')

        self.start_localization_ = True
        self.start_navigation_ = False
        self.start_excavation_ = False

        self.initial_x_ = 0.0
        self.initial_y_ = 0.0


        self.navigation_client_ = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        self.localization_client_ = ActionClient(self, Localization, 'localization_action')
        self.excavation_client_ = ActionClient(self, Excavation, 'excavation_action')

        self.execution_timer_ = self.create_timer(1.0, self.execute)

        self.get_logger().info("NavigationClient node initialized.")

    def execute(self):
# calls like everyone one second i think to check if the other servers are on (nav , exca, local)
        if self.start_localization_:
            self.request_localization()
        elif self.start_navigation_:
            self.request_navigation()
        elif self.start_excavation_:
            self.request_excavation()

    # --------------------------------------------------------------------------
    # 1) LOCALIZATION
    # --------------------------------------------------------------------------
    def request_localization(self):

        # wait for the action server (up to 1s)
        if not self.localization_client_.wait_for_server(timeout_sec=1.0):
            self.get_logger().warn("\033[1;33mLOCALIZATION ACTION SERVER NOT AVAILABLE.\033[0m")
            return

        goal_msg = Localization.Goal()
        # fill in fields regarding to .actions

        send_goal_options = rclpy.action.client.ClientGoalHandle
        from rclpy.action import ClientGoalHandle
        from rclpy.action import SendGoalOptions
        send_goal_options = SendGoalOptions()
        send_goal_options.result_callback = self.handle_localization_result

        self.localization_client_.send_goal_async(goal_msg, feedback_callback=None, goal_options=send_goal_options)
        self.start_localization_ = False

    def handle_localization_result(self, future):
        """
        Called when the localization action completes.
        The future returns a ClientGoalHandle, whose get_result_async() we can chain,
        or in simpler usage, it might directly have a .result for the final result.
        We'll do a second callback for the actual result to keep it consistent.
        """
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("\033[1;31mLOCALIZATION GOAL REJECTED.\033[0m")
            # Could shut down or keep trying
            return

        self.get_logger().info("\033[1;36mLocalization goal accepted, waiting for result...\033[0m")
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.handle_localization_result_done)

    def handle_localization_result_done(self, future):
        """
        Called when the result of the localization action is finally available.
        """
        result = future.result()
        if result.status == 4:  # STATUS_SUCCEEDED
            loc_result = result.result
            self.initial_x_ = loc_result.x
            self.initial_y_ = loc_result.y
            self.get_logger().info(
                f"\033[1;32mLOCALIZATION COMPLETE. INITIAL POSE: [{self.initial_x_:.2f}, {self.initial_y_:.2f}]\033[0m")
            self.start_navigation_ = True
        else:
            self.get_logger().error("\033[1;31mLOCALIZATION FAILED.\033[0m")
            # We can shut down the node or handle error
            rclpy.shutdown()

    # --------------------------------------------------------------------------
    # 2) NAVIGATION
    # --------------------------------------------------------------------------
    def request_navigation(self):
        if not self.navigation_client_.wait_for_server(timeout_sec=1.0):
            self.get_logger().warn("\033[1;33mNAVIGATION ACTION SERVER NOT AVAILABLE.\033[0m")
            return

        # sleep 7s to let Nav2 fully load
        time.sleep(7)

        goal_msg = NavigateToPose.Goal()

        goal_pose_stamped = PoseStamped()
        goal_pose_stamped.header.stamp = self.get_clock().now().to_msg()
        goal_pose_stamped.header.frame_id = "map"
        goal_pose_stamped.pose.position.x = self.initial_x_ + 3.75
        goal_pose_stamped.pose.position.y = self.initial_y_ + 1.0
        goal_pose_stamped.pose.orientation.z = 0.707
        goal_pose_stamped.pose.orientation.w = 0.707

        goal_msg.pose = goal_pose_stamped

        from rclpy.action import SendGoalOptions
        send_goal_options = SendGoalOptions()
        send_goal_options.result_callback = self.handle_navigation_result

        self.get_logger().info("\033[1;36mSENDING NAVIGATION GOAL TO EXCAVATION ZONE...\033[0m")
        self.navigation_client_.send_goal_async(goal_msg, feedback_callback=None, goal_options=send_goal_options)
        self.start_navigation_ = False

    def handle_navigation_result(self, future):

        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("\033[1;31mNavigation goal was rejected.\033[0m")
            return

        self.get_logger().info("\033[1;32mNavigation goal accepted, waiting for result...\033[0m")
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.handle_navigation_result_done)

    def handle_navigation_result_done(self, future):

        result = future.result()
        if result.status == 4:  # STATUS_SUCCEEDED
            self.get_logger().info("\033[1;32mEXCAVATION ZONE REACHED. REQUESTING EXCAVATION...\033[0m")
            self.start_excavation_ = True
        elif result.status == 2:  # STATUS_ABORTED
            self.get_logger().error("\033[1;31mGOAL ABORTED, UNABLE TO REACH EXCAVATION ZONE\033[0m")

    # --------------------------------------------------------------------------
    # 3) EXCAVATION
    # --------------------------------------------------------------------------
    def request_excavation(self):

        if not self.excavation_client_.wait_for_server(timeout_sec=1.0):
            self.get_logger().warn("\033[1;33mEXCAVATION server not up/found! Are you running nodes seperatly?\033[0m")
            return

        goal_msg = Excavation.Goal()
# fill fields
        from rclpy.action import SendGoalOptions
        send_goal_options = SendGoalOptions()
        send_goal_options.result_callback = self.handle_excavation_result

        self.excavation_client_.send_goal_async(goal_msg, feedback_callback=None, goal_options=send_goal_options)
        self.start_excavation_ = False

    def handle_excavation_result(self, future):

        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("\033[1;31mExcavation Goal Rejected...\033[0m")
            return

        self.get_logger().info("\033[1;36mExcavation goal accepted, waiting for result...\033[0m")
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.handle_excavation_result_done)

    def handle_excavation_result_done(self, future):
        result = future.result()
        if result.status == 4:  # STATUS_SUCCEEDED
            self.get_logger().info("\033[1;32mEXCAVATION SUCCESS!\033[0m")
        else:
            self.get_logger().error("\033[1;31mEXCAVATION FAILED.\033[0m")


def main(args=None):
    rclpy.init(args=args)
    node = NavigationClient()
    rclpy.spin(node)
    rclpy.shutdown()

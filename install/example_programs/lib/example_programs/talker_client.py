#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus


from example_infs.msg import Uhuy
from example_infs.srv import Print
from example_infs.action import Bruh
from std_msgs.msg import String


class TalkerClientPython(Node):

  def __init__(self):
    super().__init__('talker_client_python')

    self.old_print = ''
    self.old_bruh = 0

    self.get_logger().info('Initiating talker and client...')
    
    # publisher
    self.pub_message = self.create_publisher(String, 'example_msg/message', 10)
    self.pub_uhuy = self.create_publisher(Uhuy, 'example_msg/uhuy', 10)

    # timer
    timer_period = 0.5  # seconds
    self.timer = self.create_timer(timer_period, self.timer_callback)

    # service client
    self.cli_print = self.create_client(Print, 'example_srv/print')

    # action client
    self.cli_act_bruh = ActionClient(self, Bruh, 'example_act/bruh')

    # parameters
    self.declare_parameter('example_param/input', 'STOP')
    self.declare_parameter('example_param/bruh', 0)

    self.service_check()

  def timer_callback(self):
    param_input = self.get_parameter('example_param/input').get_parameter_value().string_value
    count_bruh = self.get_parameter('example_param/bruh').get_parameter_value().integer_value

    msg = String()
    msg.data = 'Halo dunia!'
    self.pub_message.publish(msg)

    uhuy_msg = Uhuy()
    uhuy_msg.uhuy = 'UHUY'
    uhuy_msg.command = 'PRINT'
    self.pub_uhuy.publish(uhuy_msg)

    self.request_print(param_input)
    self.send_goal(count_bruh)

  def service_check(self):
    while ( (not self.cli_print.wait_for_service(timeout_sec=1.0)) and (not self.cli_act_bruh.wait_for_server(timeout_sec=1.0)) ):
      if not rclpy.ok():
        self.get_logger().error('Interrupted while waiting for server. Exiting')
        return

      self.get_logger().warn('Service/Action not available, waiting...')


  def request_print(self, input):
    new_print = input

    if (new_print != self.old_print):
      request = Print.Request()
      request.command = input

      future = self.cli_print.call_async(request)

      def callback_fut_print(_future):
        result = _future.result()
        self.get_logger().info('Service call responded with ' + str(result.success))
        self.old_print = input

      future.add_done_callback(callback_fut_print)    

  # ACTION FUNCTIONS
  def send_goal(self, _count_bruh):

    if ( (self.old_bruh != _count_bruh) and (_count_bruh > 0) ):
      goal_msg = Bruh.Goal()
      goal_msg.count = _count_bruh

      self.get_logger().info('Sending goal')

      goal_future = self.cli_act_bruh.send_goal_async(
        goal_msg,
        feedback_callback=self.feedback_callback)

      # ACTION GOAL RESPONSE CALLBACK
      def goal_response_callback(_future_goal):
        goal_handle = _future_goal.result()
        if not goal_handle.accepted:
          self.get_logger().info('Goal rejected :(')
        else:
          self.get_logger().info('Goal accepted :)')
          
          result_future = goal_handle.get_result_async()

          # ACTION RESULT CALLBACK
          def get_result_callback(_future_result):
            result = _future_result.result().result
            status = _future_result.result().status

            if status == GoalStatus.STATUS_SUCCEEDED:
              self.get_logger().info('Service call responded with ' + str(result.status))
            elif status == GoalStatus.STATUS_ABORTED:
              self.get_logger().info('Goal was aborted')
            elif status == GoalStatus.STATUS_CANCELED:
              self.get_logger().info('Goal was canceled')
            else:
              self.get_logger().info('Unknown result code')

          result_future.add_done_callback(get_result_callback)

        self.old_bruh = _count_bruh

      goal_future.add_done_callback(goal_response_callback)  
      

  # ACTION CALLBACKS
  def feedback_callback(self, feedback):
    self.get_logger().info(str(feedback.feedback.bruh))

def main(args=None):
  rclpy.init(args=args)

  talker_client_python = TalkerClientPython()

  rclpy.spin(talker_client_python)

  # Destroy the node explicitly
  # (optional - otherwise it will be done automatically
  # when the garbage collector destroys the node object)
  talker_client_python.destroy_node()
  rclpy.shutdown()


if __name__ == '__main__':
  main()
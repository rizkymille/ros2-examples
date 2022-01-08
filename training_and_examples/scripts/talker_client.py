#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_infs.msg import Uhuy
from example_infs.srv import Print
from std_msgs.msg import String


class TalkerClientPython(Node):

  def __init__(self):
    super().__init__('talker_client_python')

    self.old_print = ''

    self.get_logger().info('Initiating talker and client...')
    # publisher
    self.pub_msgs = self.create_publisher(String, 'example_msg/msgs', 10)
    self.pub_uhuy = self.create_publisher(Uhuy, 'example_msg/uhuy', 10)

    # timer
    timer_period = 0.5  # seconds
    self.timer = self.create_timer(timer_period, self.timer_callback)

    # client
    self.cli_print = self.create_client(Print, 'example_srv/print')

    # parameters
    self.declare_parameter('example_param/input', 'PRINT')

    self.service_check()

  def timer_callback(self):
    param_msgs = self.get_parameter('example_param/input').get_parameter_value().string_value

    msg = String()
    msg.data = 'Halo dunia!'
    self.pub_msgs.publish(msg)

    uhuy_msg = Uhuy()
    uhuy_msg.uhuy = 'UHUY'
    uhuy_msg.command = 'PRINT'
    self.pub_uhuy.publish(uhuy_msg)

    self.request_print(param_msgs)

  def service_check(self):
    while not self.cli_print.wait_for_service(timeout_sec=1.0):
      self.get_logger().info('service not available, waiting again...')

  def request_print(self, input):
    new_print = input

    if (new_print != self.old_print):
      request = Print.Request()
      request.command = input

      future = self.cli_print.call_async(request)

      def client_callback(_future):
        result = future.result()
        self.get_logger().info('Service call responded with ' + str(result.success))
        self.old_print = input

      future.add_done_callback(client_callback)      


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
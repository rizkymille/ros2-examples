#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from example_infs.msg import Uhuy
from example_infs.srv import Print

class ListenerServerPython(Node):

  def __init__(self):
    super().__init__('listener_server_python')

    self.print_continous = False
    self.uhuy_msg = ''
    self.uhuy_command = ''

    self.get_logger().info('Initiating listener and server...')

    # subscriber
    self.create_subscription(String, 'example_msg/msgs', self.topic_callback, 10)
    self.create_subscription(Uhuy, 'example_msg/uhuy', self.uhuy_callback, 10)
    #self.subscription = self.create_subscription(String, 'topic', self.listener_callback, 10)
    #self.subscription  # prevent unused variable warning
        
    # server
    self.create_service(Print, 'example_srv/print', self.print_callback)
    #self.srv = self.create_service(Print, 'example_srv/print', self.print_callback)
    
    # timer
    timer_period = 0.5  # seconds
    self.timer = self.create_timer(timer_period, self.timer_callback)

  def timer_callback(self):
    if (self.print_continous):
      self.get_logger().info(self.message)
    
    if (self.uhuy_command == 'PRINT'):
      self.get_logger().info(self.uhuy_msg)

  def topic_callback(self, msg):
    self.message = msg.data

  def uhuy_callback(self, msg):
    self.uhuy_msg = msg.uhuy
    self.uhuy_command = msg.command

  def print_callback(self, request, response):
    if (request.command == 'PRINT'):
      self.print_continous = True
      response.success = True
    elif (request.command == 'STOP'):
      self.print_continous = False
      response.success = True
    else:
      self.get_logger().info('Command Invalid!')
      response.success = False
     
    return response

  

def main(args=None):
  rclpy.init(args=args)

  listener_server_python = ListenerServerPython()

  rclpy.spin(listener_server_python)

  # Destroy the node explicitly
  # (optional - otherwise it will be done automatically
  # when the garbage collector destroys the node object)
  listener_server_python.destroy_node()
  rclpy.shutdown()


if __name__ == '__main__':
  main()
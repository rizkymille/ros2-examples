#!/usr/bin/env python3

from module import Header

from rclpy.node import Node
import rclpy

class UsingLibPython(Node, Header):

  def __init__(self): 
    super().__init__('using_lib_python')
    
    self.get_logger().info('Initiating library/module using program')
    
    Header.__init__(self) # calling constructor from inheritance class Header

    #self.header = Header() # call this if you are using regular class

    # timer
    timer_period = 0.5  # seconds
    self.timer = self.create_timer(timer_period, self.timer_callback)

    self.service_check()

  def timer_callback(self):
    self.get_param()
    
    self.publish_msg()
    self.publish_uhuy()
    self.print_uhuy()

    self.request_print(self.param_msgs)




def main(args=None):
  rclpy.init(args=args)

  using_lib_python = UsingLibPython()

  rclpy.spin(using_lib_python)

  # Destroy the node explicitly
  # (optional - otherwise it will be done automatically
  # when the garbage collector destroys the node object)
  using_lib_python.destroy_node()
  rclpy.shutdown()

if __name__ == '__main__':
  main()
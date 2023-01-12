import rclpy

from std_msgs.msg import String
from example_infs.msg import Uhuy
from example_infs.srv import Print

class Header():

  def __init__(self):
    self.old_print = ''
    self.print_continous = False
    self.uhuy_msg = ''
    self.uhuy_command = ''
    self.param_input = ''

    # publisher
    self.pub_message = self.create_publisher(String, 'example_msg/message', 10)
    self.pub_uhuy = self.create_publisher(Uhuy, 'example_msg/uhuy', 10)

    # subscriber
    self.create_subscription(String, 'example_msg/message', self.callback_msg_message, 10)
    self.create_subscription(Uhuy, 'example_msg/uhuy', self.callback_msg_uhuy, 10)

    # client
    self.cli_print = self.create_client(Print, 'example_srv/print')

    # server
    self.create_service(Print, 'example_srv/print', self.callback_srv_print)

    # parameters
    self.declare_parameter('example_param/input', 'PRINT')

  def get_param(self):
    self.param_input = self.get_parameter('example_param/input').get_parameter_value().string_value

  def service_check(self):
    while not self.cli_print.wait_for_service(timeout_sec=1.0):
      if not rclpy.ok():
        self.get_logger().error('Interrupted while waiting for server. Exiting')
        return

      self.get_logger().warn('Service not available, waiting...')

  def publish_uhuy(self):
    uhuy_msg = Uhuy()
    uhuy_msg.uhuy = 'UHUY'
    uhuy_msg.command = 'PRINT'
    self.pub_uhuy.publish(uhuy_msg)

  def publish_msg(self):
    msg = String()
    msg.data = 'Halo dunia!'
    self.pub_message.publish(msg)

  def print_uhuy(self):
    if (self.print_continous):
      self.get_logger().info(self.message)
    
    if (self.uhuy_command == 'PRINT'):
      self.get_logger().info(self.uhuy_msg)

  def request_print(self, input):
    new_print = input

    if (new_print != self.old_print):
      request = Print.Request()
      request.command = input

      future = self.cli_print.call_async(request)

      def callback_fut_print(_future):
        result = future.result()
        self.get_logger().info('Service call responded with ' + str(result.success))
        self.old_print = input

      future.add_done_callback(callback_fut_print)

  # CALLBACKS
  def callback_msg_message(self, msg):
    self.message = msg.data

  def callback_msg_uhuy(self, msg):
    self.uhuy_msg = msg.uhuy
    self.uhuy_command = msg.command

  def callback_srv_print(self, request, response):
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

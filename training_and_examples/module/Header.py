from std_msgs.msg import String
from example_infs.msg import Uhuy
from example_infs.srv import Print

class Header():

  def __init__(self):
    self.old_print = ''
    self.print_continous = False
    self.uhuy_msg = ''
    self.uhuy_command = ''
    self.param_msgs = ''

    # publisher
    self.pub_msgs = self.create_publisher(String, 'example_msg/msgs', 10)
    self.pub_uhuy = self.create_publisher(Uhuy, 'example_msg/uhuy', 10)

    # subscriber
    self.create_subscription(String, 'example_msg/msgs', self.topic_callback, 10)
    self.create_subscription(Uhuy, 'example_msg/uhuy', self.uhuy_callback, 10)

    # client
    self.cli_print = self.create_client(Print, 'example_srv/print')

    # server
    self.create_service(Print, 'example_srv/print', self.print_callback)

    # parameters
    self.declare_parameter('example_param/input', 'PRINT')

  def get_param(self):
    self.param_msgs = self.get_parameter('example_param/input').get_parameter_value().string_value

  def service_check(self):
    while not self.cli_print.wait_for_service(timeout_sec=1.0):
      self.get_logger().info('service not available, waiting again...')

  def publish_uhuy(self):
    uhuy_msg = Uhuy()
    uhuy_msg.uhuy = 'UHUY'
    uhuy_msg.command = 'PRINT'
    self.pub_uhuy.publish(uhuy_msg)

  def publish_msg(self):
    msg = String()
    msg.data = 'Halo dunia!'
    self.pub_msgs.publish(msg)

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

      def client_callback(_future):
        result = future.result()
        self.get_logger().info('Service call responded with ' + str(result.success))
        self.old_print = input

      future.add_done_callback(client_callback)

  # CALLBACKS
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

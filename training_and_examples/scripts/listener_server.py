#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
# Action libraries
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.executors import MultiThreadedExecutor

from std_msgs.msg import String
from example_infs.msg import Uhuy
from example_infs.srv import Print
from example_infs.action import Bruh

class ListenerServerPython(Node):

  def __init__(self):
    super().__init__('listener_server_python')

    self.print_continous = False
    self.uhuy_msg = ''
    self.uhuy_command = ''
    self.i = 0

    self.get_logger().info('Initiating listener and server...')

    # subscriber
    self.create_subscription(String, 'example_msg/message', self.callback_msg_message, 10)
    self.create_subscription(Uhuy, 'example_msg/uhuy', self.callback_msg_uhuy, 10)
        
    # service server
    self.create_service(Print, 'example_srv/print', self.callback_srv_print)
    
    # action server
    ActionServer(
      self,
      Bruh,
      'example_act/bruh',
      execute_callback=self.execute_callback_bruh,
      #handle_accepted_callback=self.handle_accepted_callback_bruh,
      goal_callback=self.goal_callback_bruh,
      cancel_callback=self.cancel_callback_bruh)

    # timer
    self.timer_period = 0.5  # seconds
    self.timer = self.create_timer(self.timer_period, self.timer_loop)

  def timer_loop(self):
    if (self.print_continous):
      self.get_logger().info(self.message)
    
    if (self.uhuy_command == 'PRINT'):
      self.get_logger().info(self.uhuy_msg)

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

  # ACTION SERVER FUNCTIONS
  def goal_callback_bruh(self, goal_request):
    # Accept or reject a client request to begin an action.
    # This server allows multiple goals in parallel
    self.get_logger().info('Received goal request with order %d' % goal_request.count)

    # Accept request if over 50
    if(goal_request.count > 50):
      return GoalResponse.REJECT
    else:
      return GoalResponse.ACCEPT

  def cancel_callback_bruh(self, goal_handle):
    # Accept or reject a client request to cancel an action.
    self.get_logger().info('Received request to cancel goal')
    return CancelResponse.ACCEPT

  '''
  For more features of safety execution on action server, please look at:
  Queue system:
  https://github.com/ros2/examples/blob/master/rclpy/actions/minimal_action_server/examples_rclpy_minimal_action_server/server_queue_goals.py
  One goal only:
  https://github.com/ros2/examples/blob/master/rclpy/actions/minimal_action_server/examples_rclpy_minimal_action_server/server_single_goal.py
  '''

  '''
  Multiexecutor style
  Can't use single executor server style in rclpy because execute_callback can't be empty
  '''
  async def execute_callback_bruh(self, goal_handle):
    # Execute a goal
    self.get_logger().info('Executing goal')

    i = 0

    loop_rate = self.create_rate(1/self.timer_period)

    feedback_bruh = Bruh.Feedback()
    result_bruh = Bruh.Result()

    while(rclpy.ok()):
      # Check if there is a cancel request
      if goal_handle.is_cancel_requested:
        self.get_logger().info('Goal Canceled')
        result_bruh.status = False
        goal_handle.canceled()
        return result_bruh

      # Check if goal is done
      if (i == goal_handle.request.count):
        self.get_logger().info('Goal Succeeded')
        result_bruh.status = True
        goal_handle.succeed()
        return result_bruh

      feedback_bruh.bruh =  'BRUH ' + str(i)
      goal_handle.publish_feedback(feedback_bruh)

      self.get_logger().info('Publish Feedback')

      i += 1

      loop_rate.sleep()

  
def main(args=None):
  rclpy.init(args=args)

  listener_server_python = ListenerServerPython()

  # Multiexecutor style
  executor = MultiThreadedExecutor()
  rclpy.spin(listener_server_python, executor=executor)

  # Single executor style
  #rclpy.spin(listener_server_python)

  # Destroy the node explicitly
  # (optional - otherwise it will be done automatically
  # when the garbage collector destroys the node object)
  listener_server_python.destroy_node()
  rclpy.shutdown()


if __name__ == '__main__':
  main()
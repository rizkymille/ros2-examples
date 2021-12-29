from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  ld = LaunchDescription()

  listener_server_node = Node(
    package='training_and_examples',
    executable='listener_server_cpp',
    name='listener_server',
    output='screen'
  )

  talker_client_node = Node(
    package='training_and_examples',
    executable='talker_client_cpp',
    name='talker_client',
    parameters=[{"command":"PRINT"}],
    output='screen'
  )

  ld.add_action(listener_server_node)
  ld.add_action(talker_client_node)

  return ld
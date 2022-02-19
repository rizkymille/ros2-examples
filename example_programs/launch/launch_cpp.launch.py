from launch import LaunchDescription
from launch_ros.actions import Node

import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
  ld = LaunchDescription()

  config = os.path.join(
    get_package_share_directory('example_programs'),
    'config',
    'params.yaml'
    )

  # global initial parameter
  # glob_params = [{"lala/lele":"LOLO"},
  #                {"haha/hihi":"HEHO"}]

  listener_server_node = Node(
    package='example_programs',
    executable='listener_server_cpp',
    name='listener_server_cpp',
    # parameters=glob_params,
  )

  talker_client_node = Node(
    package='example_programs',
    executable='talker_client_cpp',
    name='talker_client_cpp',
    # parameters=glob_params+[{"example_param/Input":"PRINT"}],
    parameters=[config],
  )

  ld.add_action(listener_server_node)
  ld.add_action(talker_client_node)

  return ld
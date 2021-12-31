from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  ld = LaunchDescription()

  # cara bikin global parameter tanpa global parameter server,
  # using vtol e p i c big brain technique
  # glob_params = [{"lala/lele":"LOLO"},
  #                {"haha/hihi":"HEHO"}]

  listener_server_node = Node(
    package='training_and_examples',
    executable='listener_server_cpp',
    name='listener_server',
    # biar bisa masukkin global param:
    # parameters=glob_params,
    output='screen'
  )

  talker_client_node = Node(
    package='training_and_examples',
    executable='talker_client_cpp',
    name='talker_client',
    # biar bisa masukkin global param:
    # parameters=glob_params+[{"example_param/Input":"PRINT"}],
    parameters=[{"example_param/Input":"PRINT"}],
    output='screen'
  )

  ld.add_action(listener_server_node)
  ld.add_action(talker_client_node)

  return ld
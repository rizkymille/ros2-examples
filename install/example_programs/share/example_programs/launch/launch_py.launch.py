from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import GroupAction

from launch_ros.actions import Node
from launch.conditions import LaunchConfigurationEquals


def generate_launch_description():
  ld = LaunchDescription()

  launch_exe_arg = DeclareLaunchArgument('launch_exe', default_value='lib')

  launch_lib_exe = GroupAction(
    actions=[
      Node(
        package='example_programs',
        executable='using_lib.py',
        name='using_lib_python',
        parameters=[{"example_param/input":"PRINT"}],
        )
      ],
    condition=LaunchConfigurationEquals('launch_exe', 'lib')
    )
  
  '''
  global initial parameter
  glob_params = [{"lala/lele":"LOLO"},
                 {"haha/hihi":"HEHO"}]

  talker_client_node = Node(
    package='example_programs',
    executable='talker_client.py',
    name='talker_client_python',
    # parameters=glob_params+[{"example_param/Input":"PRINT"}],
    parameters=[{"example_param/input":"PRINT"}],
  )
  '''

  launch_split_exe = GroupAction(
    actions=[
      Node(
        package='example_programs',
        executable='listener_server.py',
        name='listener_server_python',
        ),
      Node(
        package='example_programs',
        executable='talker_client.py',
        name='talker_client_python',
        parameters=[{'example_param/input':'PRINT'}],
        )
      ],
    condition=LaunchConfigurationEquals('launch_exe', 'split')
    )
  
  ld.add_action(launch_exe_arg)
  ld.add_action(launch_lib_exe)
  ld.add_action(launch_split_exe)
  
  return ld
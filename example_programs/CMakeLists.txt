cmake_minimum_required(VERSION 3.8)
project(example_programs)

# Default as C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
# C++ dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)

# Python dependencies
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)

# Message dependencies
find_package(std_msgs REQUIRED)
find_package(example_infs REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# Add include directory
include_directories(include)

# Create Cpp library from header
add_library(header SHARED src/header.cpp)
ament_target_dependencies(header 
  rclcpp
  std_msgs
  example_infs)
target_include_directories(header
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

add_library(header_multiexecutor SHARED src/header_multiexecutor.cpp)
ament_target_dependencies(header_multiexecutor 
  rclcpp
  std_msgs
  example_infs)
target_include_directories(header_multiexecutor
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

# Create Cpp executable
add_executable(listener_server_cpp 
  src/listener_server.cpp)
ament_target_dependencies(listener_server_cpp 
  rclcpp
  rclcpp_action
  std_msgs
  example_infs)

add_executable(talker_client_cpp 
  src/talker_client.cpp)
ament_target_dependencies(talker_client_cpp 
  rclcpp
  rclcpp_action
  std_msgs
  example_infs)

add_executable(using_lib_cpp 
  src/using_lib.cpp)
target_link_libraries(using_lib_cpp
  header)
ament_target_dependencies(using_lib_cpp 
  rclcpp)

add_executable(using_lib_multiexecutor_cpp 
  src/using_lib_multiexecutor.cpp)
target_link_libraries(using_lib_multiexecutor_cpp
  header_multiexecutor)
ament_target_dependencies(using_lib_multiexecutor_cpp 
  rclcpp)

#############
## TESTING ##
#############

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

#############
## INSTALL ##
#############

ament_export_targets(header header_multiexecutor HAS_LIBRARY_TARGET)
ament_export_dependencies(ament_cmake ament_cmake_python rclcpp rclcpp_action rclpy example_infs std_msgs)

# Install launch file
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Install yaml parameters file
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

# Install header files
install(
  DIRECTORY include/${PROJECT_NAME}
  DESTINATION include
)

## Install and export library
install( 
  TARGETS header
  EXPORT header
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  TARGETS header_multiexecutor
  EXPORT header_multiexecutor
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

# Install Cpp executables
install(TARGETS
  listener_server_cpp
  talker_client_cpp
  using_lib_cpp
  using_lib_multiexecutor_cpp
  DESTINATION lib/${PROJECT_NAME}
)



# Install Python modules
ament_python_install_package(module)

# Install Python executables
install(PROGRAMS
  scripts/listener_server.py 
  scripts/talker_client.py
  scripts/using_lib.py
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()

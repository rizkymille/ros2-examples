cmake_minimum_required(VERSION 3.8)
project(training_and_examples)

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

# Python dependencies
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)

# Message dependencies
find_package(std_msgs REQUIRED)
find_package(example_msgs REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# Include cpp "include" directory
#include_directories(include/${PROJECT_NAME})

# Create Cpp library from header
# set(HEADER_FILES include/the_library/lib_header.hpp)
#add_library(Header
#  src/Header.cpp
#  include/${PROJECT_NAME}/Header.hpp)
#ament_export_targets(Header
#  rclcpp
#  std_msgs)


# Create Cpp executable
add_executable(listener_server_cpp 
  src/listener_server.cpp)
ament_target_dependencies(listener_server_cpp 
  rclcpp
  std_msgs
  example_msgs)

add_executable(talker_client_cpp 
  src/talker_client.cpp)
ament_target_dependencies(talker_client_cpp 
  rclcpp
  std_msgs
  example_msgs)

#add_executable(using_lib 
#  src/using_lib.cpp)
#target_link_libraries(using_lib 
#  Header)
#ament_target_dependencies(using_lib 
#  rclcpp
#  std_msgs)

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

# Install Cpp executables
install(TARGETS
  listener_server_cpp
  talker_client_cpp
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch file
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Install header files
#install(
#  DIRECTORY include/${PROJECT_NAME}
#  DESTINATION include
#)

## Install and export library
#install(
#  TARGETS headers
#  EXPORT headers
#  LIBRARY DESTINATION lib
#  ARCHIVE DESTINATION lib
#  RUNTIME DESTINATION bin
#  INCLUDES DESTINATION include
#)


# Install Python modules
#ament_python_install_package(${PROJECT_NAME})

# Install Python executables
#install(PROGRAMS
#  src/scripts/listener_server.py
#  src/scripts/talker_client.py
#  DESTINATION lib/${PROJECT_NAME}
#)


ament_package()

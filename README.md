# ROS2 Training and Examples
My repository for ros2 training and code examples

# Some style and guides
## Interface package (example_infs)
- If the interface package only uses msg type, then the package name should be:\ 
`<package_name>_msgs`
- If the interface package only uses srv type, then the package name should be:\ 
`<package_name>_srvs`
- If the interface package only uses action type, then the package name should be:\
`<package_name>_acts`
- If the interface package contains srv and msg type, or all the three types, then the package name should be:\
`<package_name>_infs`

## Program package (example_programs)
This package is language mixed, that's why I still use CMakeLists even there's python program.
### Python
- `module` folder are for module or library. And `scripts` are for executables.
- In executables, don't forget to add shebang line `#!/usr/bin/env python3`. Otherwise your program can't be found
- Refrain yourself from declaring variables in class. Use `self.variable = <initial_variable>`
### C++
#### Executables
- Put variable declaration above method declaration in the class (Please don't follow ros2 examples).
- Use `const` and `&` as possible in function parameters. You'll save memory. 
Example: `void RunTest(const int& test_num)`
- Contrary to headers, you can define method body directly inside the class
#### Headers/Libraries
- Rather than traditional `.h` format, use `.hpp`. Put that inside `include/<project_name>`
- In terms of header files, write the function body in `.cpp` file
- The define name should be `<PACKAGE_NAME>_HPP_` in `#ifndef`, `#define`, and as comments in `#endif`.\ The endif should be `#endif //_<PACKAGE_NAME>_HPP_`
### ROS Styles
#### Message Labeling
Name should be hiearchical with slash as separator of hiearchy,contains package name as the top level of hierarchy, and represents the message.\
\
Examples:\
Service name for takeoff requests\
`<package_name>/motion/takeoff`\
Topic name for vision position\
`<package_name>/sensor/vision`\
Action name for position requests\
`<package_name>/motion/position`\
Parameter name for Proportional roll constant\
`<package_name>/control/PID/roll/P`\
\
Best practices:
- Always use single word whenever possible
- Create documentation in README.md for every message name and types
#### Message Typing
- Custom data type name should be one word and reusable
- Use available data type from ROS (like std_msgs and sensor_msgs) if possible
#### Variable naming
Variable for construction of message operation should be go like this:\
`<message_operation>_<lowest_message_hierarchy>`\
The message_operation should be in 3 starting syllable
\
Example:
- Service name for takeoff requests\
Server:\
`ser_takeoff`\
Client:\
`cli_takeoff`
- Topic name for vision position\
Publisher:\
`pub_vision`\
Subscriber:\
`sub_vision`
- Action name for position requests\
**Special case: use `_act_` between message operation and lowest message hierarchy as designator**
Client:\
`cli_act_pos`\
Server:\
`ser_act_pos`

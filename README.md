# ROS2 Training and Examples
My repository for ros2 training and code examples

# Some style and guides
## Interface package (example_infs)
If the interface package only uses msg type, then the package name should be:\
`<package_name>_msgs`

If the interface package only uses srv type, then the package name should be:\
`<package_name>_srvs`

If the interface package contains srv and msg type, then the package name should be:\
`<package_name>_infs`

## Program package (training_and_examples)
This package is language mixed, that's why I still use CMakeLists even there's python program.
### Python
`module` folder are for module (or library, whatever). And `scripts` are for executables. Please don't put executable in module
like other people do!\
\
If you're creating python executables, don't forget to add shebang line `#!/usr/bin/env python3`! Otherwise your program can't be found\
\
Refrain yourself from declaring variables in class. If you needed initial value, use `self.variable = <initial_variable>`\
### C++
Put variable declaration above method declaration in the class. In this case please don't follow ros2 examples\
\
Use `const` and `&` as possible in function parameters. You'll save memory. Example: `void RunTest(const int& test_num)`\
\
Rather than traditional `.h` format, use `.hpp`. Put that inside `include/<project_name>`\
\
In terms of header files, write the function body in `.cpp` file. But when using local class in `.cpp`, write the body directly under function header.

## TODO
Nothing at the moment :)

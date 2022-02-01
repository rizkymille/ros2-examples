# Nugget's Guide How to Install ROS2: Drone Edition
#### What this installation guide will cover
- Linux Ubuntu
- ROS2 (obviously)
- PX4-ROS2 Hub
- Gazebo

## Linux Ubuntu
- Create empty partition first for ubuntu, use 'shrink volume' feature in 'disk manager'
- The partition size for ubuntu depends on your usage. Recommended size: above 20 GB
- The minimal paritition for ubuntu contains 2 system: swap, and root. Swap is important because it acts as 'extended RAM' of your computer. Please allocate it, especially if you like to use hibernation mode
- The swap allocation size can be according to this guide: https://help.ubuntu.com/community/SwapFaq
- Now for installing ubuntu, I recommend you to use 20.04 (LTS) version: https://releases.ubuntu.com/20.04/
- Flash the ubuntu ISO image into your flashdisk
- Restart your computer, and enter BIOS mode. Set your flashdisk as your boot priority or boot from flashdisk
- Happy installing!

## ROS2 
- Determine first if you want LTS or not. The LTS version is **Foxy Fitzroy**, but the latest non-LTS version is **Galactic Geochelone**
- Look at this easy to follow guide!\
https://docs.ros.org/en/galactic/Installation/Ubuntu-Install-Debians.html (Galactic version)\
https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html (Foxy version)\
Note:\
`ros-<ros_distro_version>-desktop` is the desktop version which contains all the ROS2 packages. recommended for desktop!\
`ros-<ros_distro_version>-base` is the base version which contains basic ROS2 packages. recommended for SBC!
- Install colcon\
`sudo apt install python3-colcon-common-extensions`

## PX4-ROS2 Hub
PX4 uses Fast RTPS DDS, not Cyclone DDS. Therefore more steps to install!
- Install Java\
`sudo apt install openjdk-11-jre-headless`
- Install sdkman\
`curl -s "https://get.sdkman.io" | bash`\
`source "$HOME/.sdkman/bin/sdkman-init.sh"`
- Install Gradle\
`sdk install gradle 6.3`
- Install Fast-RTPS-Gen\
`git clone --recursive https://github.com/eProsima/Fast-DDS-Gen.git -b v1.0.4 ~/Fast-RTPS-Gen \`\
`    && cd ~/Fast-RTPS-Gen \`\
`    && gradle assemble \`\
`    && sudo env "PATH=$PATH" gradle install`
- Install eigen3\
`sudo apt install ros-galactic-eigen3-cmake-module`
- Install python dependencies\
`sudo pip3 install -U empy pyros-genmsg setuptools`\

- Create ROS2 PX4 workspace directory\
`mkdir -p ~/px4_ros_com_ros2/src`
- Clone package\
`git clone https://github.com/PX4/px4_ros_com.git ~/px4_ros_com_ros2/src/px4_ros_com`\
`git clone https://github.com/PX4/px4_msgs.git ~/px4_ros_com_ros2/src/px4_msgs`
- Build workspace\
`cd ~/px4_ros_com_ros2/src/px4_ros_com/scripts`\
`source build_ros2_workspace.bash`

## Gazebo JMAVSim and NuttX (Pixhawk) Targets (PLEASE DON'T INSTALL THIS IN SBC)
`git clone https://github.com/PX4/PX4-Autopilot.git --recursive`\
`bash ./PX4-Autopilot/Tools/setup/ubuntu.sh`

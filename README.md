

#ROS simulation of Ball Collecting Robot


## Overview
This is a ball collecting robot project which can collect tennis balls to increase the efficiency of training. This robot is implemented in ROS Gazebo environment using the simple Differential drive robot as the base platform.

## Authors
- Yi-ting Lei

## License
MIT open-source license, see LICENSE.TXT

## Link to AIP Sheet
[Team Agile Iterative Process](https://docs.google.com/spreadsheets/d/1sSHVqZ5bPRa4TiilXd6kWAs5Ydt1gWi9tuMVMDdzzB8/edit#gid=0)

## Link to other references
[differential drive robot tutorials](http://moorerobots.com/)

[Presentation slide link](https://docs.google.com/presentation/d/1G7NtuP653nmdPUuDPJGNaDH11IPqWWJJTNTsOYNndts/edit?usp=sharing)


## Operation and Demo

## Dependencies
- Ubuntu 14.04
- ROS indigo
- Rviz
- Package Dependencies
    - roscpp
    - std_msgs
    - message_generation
    - geometry_msgs
    - move_base_msgs
    - actionlib_msgs
    - nav_msgs
    - nav_core
    - base_local_planner
    - tf


## Known Issues

Still have issue with navigation stack

## Developer Documentation


## How to generate doxygen documentation

- In your . directory

```bash
doxygen ./Doxygen
```

- Doxygen files will be generated to ./docs folder

# Cassie Hardware using ROS with Mujoco + UDP communication

Originally created by Jenna Reher, significantly modified by Min Dai and Xiaobin Xiong. 
This repo is only intended for communication purposes. DO NOT USE WITHOUT INSTRUCTION. CODE UNORGANIZED 


If using this repo, just need to doadload Mujoco 200 or newer version 
add .mujoco folder under home, put downlodaed file in this folder. 

-----------------------------------------
If using previous repo from Min, follow the rest steps.

1. Clone the OSU mujoco repo or find it from [here](https://github.com/91xxiong/cassie-mujoco-sim), play with the sim
what needed is the libcassiemujoco.so, cassiemujoco.h,, cassiemujoco.c
cassie.xml in model 

2. Clone this [repo](https://github.com/91xxiong/CassieHardware), switch to branch mujoco 
Difference from Min is on cassie interface folder, 
what needed is cassie_mujocoSim_nodel.cpp 

3. Copy cassiemujoco.h, ~.c to cassie_interface/include and cassie_interface/src 
copy libcassiemujoco.so, cassie.xml to cassie_interface folder

4. In the CMakelist, in cassie_interface, add the following, or simply copy the one from CassieHardware
```
add_executable(cassie_mujocoSim_node src/cassie_mujocoSim_node.cpp src/udp.c) # src/cassiemujoco.c)
target_link_libraries(cassie_mujocoSim_node ${catkin_LIBRARIES} ${PROJECT_SOURCE_DIR}/lib/libagilitycassie.a ${PROJECT_SOURCE_DIR}/src/libcassiemujoco.so)
```

5. In the simulation launch file, change use_sim_time: false, remove cassie_world launch, run cassie_mujocoSim_node instead of cassie_interface_node

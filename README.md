# CassieHardware

ONGOING PROJECT 
DO NOT USE WITHOUT INSTRUCTION 
CODE UNORGANIZED 


-------------
Doadload Mujoco  200 or 210 whatever version. 

add .mujoco, put downloaed file in this folder. 

-----------------------------------------
clone this repo (OSU mujoco), play with the sim 
https://github.com/91xxiong/cassie-mujoco-sim
what needed is the libcassiemujoco.so, cassiemujoco.h,, cassiemujoco.c
cassie.xml in model 
-----------------------------------------
clone this repo, branch mujoco 
https://github.com/91xxiong/CassieHardware
Difference from Min is on cassie interface folder, 
what needed is cassie_mujocoSim_nodel.cpp 
-----------------------------------------
Copy cassiemujoco.h, .c to cassie_interface/include and cassie_interface/src 
copy libcassiemujoco.so, cassie.xml to cassie_interface too

In the CMakelist, in cassie_interface, add the following, or simply copy the one from CassieHardware

# Build the core interface node
add_executable(cassie_mujocoSim_node src/cassie_mujocoSim_node.cpp src/udp.c) # src/cassiemujoco.c)
target_link_libraries(cassie_mujocoSim_node ${catkin_LIBRARIES} ${PROJECT_SOURCE_DIR}/lib/libagilitycassie.a ${PROJECT_SOURCE_DIR}/src/libcassiemujoco.so)


-----------------------------------------
in the simulation launch file, 
use_sim_time: false. 
remove cassie_world
run cassie_mujocoSim_node instead of cassie_interface_node

----------------------------------------

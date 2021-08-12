# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "cassie_common_toolbox: 3 messages, 0 services")

set(MSG_I_FLAGS "-Icassie_common_toolbox:/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(cassie_common_toolbox_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg" NAME_WE)
add_custom_target(_cassie_common_toolbox_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cassie_common_toolbox" "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg" "geometry_msgs/Twist:geometry_msgs/Vector3:geometry_msgs/Pose:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point"
)

get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg" NAME_WE)
add_custom_target(_cassie_common_toolbox_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cassie_common_toolbox" "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg" "geometry_msgs/Vector3:geometry_msgs/Quaternion:std_msgs/Header"
)

get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg" NAME_WE)
add_custom_target(_cassie_common_toolbox_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cassie_common_toolbox" "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_cpp(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_cpp(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cassie_common_toolbox
)

### Generating Services

### Generating Module File
_generate_module_cpp(cassie_common_toolbox
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cassie_common_toolbox
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(cassie_common_toolbox_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(cassie_common_toolbox_generate_messages cassie_common_toolbox_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_cpp _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_cpp _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_cpp _cassie_common_toolbox_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cassie_common_toolbox_gencpp)
add_dependencies(cassie_common_toolbox_gencpp cassie_common_toolbox_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cassie_common_toolbox_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_eus(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_eus(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cassie_common_toolbox
)

### Generating Services

### Generating Module File
_generate_module_eus(cassie_common_toolbox
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cassie_common_toolbox
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(cassie_common_toolbox_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(cassie_common_toolbox_generate_messages cassie_common_toolbox_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_eus _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_eus _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_eus _cassie_common_toolbox_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cassie_common_toolbox_geneus)
add_dependencies(cassie_common_toolbox_geneus cassie_common_toolbox_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cassie_common_toolbox_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_lisp(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_lisp(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cassie_common_toolbox
)

### Generating Services

### Generating Module File
_generate_module_lisp(cassie_common_toolbox
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cassie_common_toolbox
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(cassie_common_toolbox_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(cassie_common_toolbox_generate_messages cassie_common_toolbox_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_lisp _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_lisp _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_lisp _cassie_common_toolbox_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cassie_common_toolbox_genlisp)
add_dependencies(cassie_common_toolbox_genlisp cassie_common_toolbox_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cassie_common_toolbox_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_nodejs(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_nodejs(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cassie_common_toolbox
)

### Generating Services

### Generating Module File
_generate_module_nodejs(cassie_common_toolbox
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cassie_common_toolbox
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(cassie_common_toolbox_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(cassie_common_toolbox_generate_messages cassie_common_toolbox_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_nodejs _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_nodejs _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_nodejs _cassie_common_toolbox_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cassie_common_toolbox_gennodejs)
add_dependencies(cassie_common_toolbox_gennodejs cassie_common_toolbox_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cassie_common_toolbox_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_py(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cassie_common_toolbox
)
_generate_msg_py(cassie_common_toolbox
  "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cassie_common_toolbox
)

### Generating Services

### Generating Module File
_generate_module_py(cassie_common_toolbox
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cassie_common_toolbox
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(cassie_common_toolbox_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(cassie_common_toolbox_generate_messages cassie_common_toolbox_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_estimation_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_py _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_proprioception_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_py _cassie_common_toolbox_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/xiaobin/cassie_ws/src/cassie_common_toolbox/msg/cassie_control_msg.msg" NAME_WE)
add_dependencies(cassie_common_toolbox_generate_messages_py _cassie_common_toolbox_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cassie_common_toolbox_genpy)
add_dependencies(cassie_common_toolbox_genpy cassie_common_toolbox_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cassie_common_toolbox_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cassie_common_toolbox)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cassie_common_toolbox
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(cassie_common_toolbox_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(cassie_common_toolbox_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cassie_common_toolbox)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cassie_common_toolbox
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(cassie_common_toolbox_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(cassie_common_toolbox_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cassie_common_toolbox)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cassie_common_toolbox
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(cassie_common_toolbox_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(cassie_common_toolbox_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cassie_common_toolbox)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cassie_common_toolbox
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(cassie_common_toolbox_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(cassie_common_toolbox_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cassie_common_toolbox)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cassie_common_toolbox\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cassie_common_toolbox
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(cassie_common_toolbox_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(cassie_common_toolbox_generate_messages_py geometry_msgs_generate_messages_py)
endif()

execute_process(COMMAND "/home/xiaobin/cassie_ws/build/amber_developer_stack/gdb_utilities/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/xiaobin/cassie_ws/build/amber_developer_stack/gdb_utilities/catkin_generated/python_distutils_install.sh) returned error code ")
endif()

find_package(GAZEBO REQUIRED)

list(APPEND cassie_interface_INCLUDE_DIRS ${GAZEBO_INCLUDE_DIRS})
list(APPEND cassie_interface_LIBRARIES ${GAZEBO_LIBRARIES})
list(APPEND cassie_interface_LIBRARY_DIRS ${GAZEBO_LIBRARY_DIRS})

#MESSAGE( STATUS "cassie_interface_INCLUDE_DIRS--------------------------------: " ${cassie_interface_INCLUDE_DIRS} )

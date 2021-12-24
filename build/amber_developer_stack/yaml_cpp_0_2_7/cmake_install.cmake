# Install script for directory: /home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/xiaobin/cassie_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2.7"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/xiaobin/cassie_ws/devel/lib/libyaml-cpp-0.2.7.so.0.2.7"
    "/home/xiaobin/cassie_ws/devel/lib/libyaml-cpp-0.2.7.so.0.2"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2.7"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/xiaobin/cassie_ws/devel/lib/libyaml-cpp-0.2.7.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yaml-cpp-0.2.7" TYPE FILE FILES
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/aliasmanager.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/anchor.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/conversion.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/dll.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/emitfromevents.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/emitter.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/emittermanip.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/eventhandler.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/exceptions.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/iterator.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/ltnode.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/mark.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/node.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/nodeimpl.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/nodereadimpl.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/nodeutil.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/noncopyable.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/null.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/ostream.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/parser.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/stlemitter.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/stlnode.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/traits.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/yaml.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/contrib/anchordict.h"
    "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/contrib/graphbuilder.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/xiaobin/cassie_ws/build/yaml-cpp-0.2.7.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/xiaobin/cassie_ws/build/amber_developer_stack/yaml_cpp_0_2_7/catkin_generated/installspace/yaml_cpp_0_2_7.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/yaml_cpp_0_2_7/cmake" TYPE FILE FILES
    "/home/xiaobin/cassie_ws/build/amber_developer_stack/yaml_cpp_0_2_7/catkin_generated/installspace/yaml_cpp_0_2_7Config.cmake"
    "/home/xiaobin/cassie_ws/build/amber_developer_stack/yaml_cpp_0_2_7/catkin_generated/installspace/yaml_cpp_0_2_7Config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/yaml_cpp_0_2_7" TYPE FILE FILES "/home/xiaobin/cassie_ws/src/amber_developer_stack/yaml_cpp_0_2_7/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/xiaobin/cassie_ws/build/amber_developer_stack/yaml_cpp_0_2_7/test/cmake_install.cmake")
  include("/home/xiaobin/cassie_ws/build/amber_developer_stack/yaml_cpp_0_2_7/util/cmake_install.cmake")

endif()


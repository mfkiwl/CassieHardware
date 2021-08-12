# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/local/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/local/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;rospy;roslib;eigen_utilities;cassie_common_toolbox".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lcassie_description;-lrbdl".split(';') if "-lcassie_description;-lrbdl" != "" else []
PROJECT_NAME = "cassie_description"
PROJECT_SPACE_DIR = "/home/xiaobin/cassie_ws/install"
PROJECT_VERSION = "0.0.0"

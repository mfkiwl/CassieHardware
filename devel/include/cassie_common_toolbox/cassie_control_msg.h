// Generated by gencpp from file cassie_common_toolbox/cassie_control_msg.msg
// DO NOT EDIT!


#ifndef CASSIE_COMMON_TOOLBOX_MESSAGE_CASSIE_CONTROL_MSG_H
#define CASSIE_COMMON_TOOLBOX_MESSAGE_CASSIE_CONTROL_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cassie_common_toolbox
{
template <class ContainerAllocator>
struct cassie_control_msg_
{
  typedef cassie_control_msg_<ContainerAllocator> Type;

  cassie_control_msg_()
    : header()
    , motor_torque()
    , ya()
    , dya()
    , yd()
    , dyd()  {
      motor_torque.assign(0.0);

      ya.assign(0.0);

      dya.assign(0.0);

      yd.assign(0.0);

      dyd.assign(0.0);
  }
  cassie_control_msg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , motor_torque()
    , ya()
    , dya()
    , yd()
    , dyd()  {
  (void)_alloc;
      motor_torque.assign(0.0);

      ya.assign(0.0);

      dya.assign(0.0);

      yd.assign(0.0);

      dyd.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<double, 10>  _motor_torque_type;
  _motor_torque_type motor_torque;

   typedef boost::array<double, 10>  _ya_type;
  _ya_type ya;

   typedef boost::array<double, 10>  _dya_type;
  _dya_type dya;

   typedef boost::array<double, 10>  _yd_type;
  _yd_type yd;

   typedef boost::array<double, 10>  _dyd_type;
  _dyd_type dyd;





  typedef boost::shared_ptr< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> const> ConstPtr;

}; // struct cassie_control_msg_

typedef ::cassie_common_toolbox::cassie_control_msg_<std::allocator<void> > cassie_control_msg;

typedef boost::shared_ptr< ::cassie_common_toolbox::cassie_control_msg > cassie_control_msgPtr;
typedef boost::shared_ptr< ::cassie_common_toolbox::cassie_control_msg const> cassie_control_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator1> & lhs, const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.motor_torque == rhs.motor_torque &&
    lhs.ya == rhs.ya &&
    lhs.dya == rhs.dya &&
    lhs.yd == rhs.yd &&
    lhs.dyd == rhs.dyd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator1> & lhs, const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cassie_common_toolbox

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab803f134e745ccc231d6d4c855e2890";
  }

  static const char* value(const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab803f134e745cccULL;
  static const uint64_t static_value2 = 0x231d6d4c855e2890ULL;
};

template<class ContainerAllocator>
struct DataType< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cassie_common_toolbox/cassie_control_msg";
  }

  static const char* value(const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header    header\n"
"float64[10] motor_torque\n"
"float64[10] ya\n"
"float64[10] dya\n"
"float64[10] yd\n"
"float64[10] dyd\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.motor_torque);
      stream.next(m.ya);
      stream.next(m.dya);
      stream.next(m.yd);
      stream.next(m.dyd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cassie_control_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cassie_common_toolbox::cassie_control_msg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "motor_torque[]" << std::endl;
    for (size_t i = 0; i < v.motor_torque.size(); ++i)
    {
      s << indent << "  motor_torque[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.motor_torque[i]);
    }
    s << indent << "ya[]" << std::endl;
    for (size_t i = 0; i < v.ya.size(); ++i)
    {
      s << indent << "  ya[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.ya[i]);
    }
    s << indent << "dya[]" << std::endl;
    for (size_t i = 0; i < v.dya.size(); ++i)
    {
      s << indent << "  dya[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dya[i]);
    }
    s << indent << "yd[]" << std::endl;
    for (size_t i = 0; i < v.yd.size(); ++i)
    {
      s << indent << "  yd[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.yd[i]);
    }
    s << indent << "dyd[]" << std::endl;
    for (size_t i = 0; i < v.dyd.size(); ++i)
    {
      s << indent << "  dyd[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dyd[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CASSIE_COMMON_TOOLBOX_MESSAGE_CASSIE_CONTROL_MSG_H

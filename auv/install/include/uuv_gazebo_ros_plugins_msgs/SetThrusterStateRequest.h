// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/SetThrusterStateRequest.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETTHRUSTERSTATEREQUEST_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETTHRUSTERSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_gazebo_ros_plugins_msgs
{
template <class ContainerAllocator>
struct SetThrusterStateRequest_
{
  typedef SetThrusterStateRequest_<ContainerAllocator> Type;

  SetThrusterStateRequest_()
    : on(false)  {
    }
  SetThrusterStateRequest_(const ContainerAllocator& _alloc)
    : on(false)  {
  (void)_alloc;
    }



   typedef uint8_t _on_type;
  _on_type on;




  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetThrusterStateRequest_

typedef ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<std::allocator<void> > SetThrusterStateRequest;

typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest > SetThrusterStateRequestPtr;
typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest const> SetThrusterStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_gazebo_ros_plugins_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'uuv_gazebo_ros_plugins_msgs': ['/home/robond/workspace/auv/src/uuv_simulator/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74983d2ffe4877de8ae30b7a94625c41";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74983d2ffe4877deULL;
  static const uint64_t static_value2 = 0x8ae30b7a94625c41ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/SetThrusterStateRequest";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
bool on\n\
";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.on);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetThrusterStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_gazebo_ros_plugins_msgs::SetThrusterStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.on);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETTHRUSTERSTATEREQUEST_H

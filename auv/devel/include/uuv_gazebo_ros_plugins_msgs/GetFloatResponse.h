// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/GetFloatResponse.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETFLOATRESPONSE_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETFLOATRESPONSE_H


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
struct GetFloatResponse_
{
  typedef GetFloatResponse_<ContainerAllocator> Type;

  GetFloatResponse_()
    : data(0.0)  {
    }
  GetFloatResponse_(const ContainerAllocator& _alloc)
    : data(0.0)  {
  (void)_alloc;
    }



   typedef double _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetFloatResponse_

typedef ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<std::allocator<void> > GetFloatResponse;

typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse > GetFloatResponsePtr;
typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse const> GetFloatResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fdb28210bfa9d7c91146260178d9a584";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfdb28210bfa9d7c9ULL;
  static const uint64_t static_value2 = 0x1146260178d9a584ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/GetFloatResponse";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 data\n\
\n\
";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetFloatResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_gazebo_ros_plugins_msgs::GetFloatResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<double>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETFLOATRESPONSE_H

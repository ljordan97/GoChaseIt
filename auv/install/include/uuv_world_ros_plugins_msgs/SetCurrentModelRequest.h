// Generated by gencpp from file uuv_world_ros_plugins_msgs/SetCurrentModelRequest.msg
// DO NOT EDIT!


#ifndef UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_SETCURRENTMODELREQUEST_H
#define UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_SETCURRENTMODELREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_world_ros_plugins_msgs
{
template <class ContainerAllocator>
struct SetCurrentModelRequest_
{
  typedef SetCurrentModelRequest_<ContainerAllocator> Type;

  SetCurrentModelRequest_()
    : mean(0.0)
    , min(0.0)
    , max(0.0)
    , noise(0.0)
    , mu(0.0)  {
    }
  SetCurrentModelRequest_(const ContainerAllocator& _alloc)
    : mean(0.0)
    , min(0.0)
    , max(0.0)
    , noise(0.0)
    , mu(0.0)  {
  (void)_alloc;
    }



   typedef double _mean_type;
  _mean_type mean;

   typedef double _min_type;
  _min_type min;

   typedef double _max_type;
  _max_type max;

   typedef double _noise_type;
  _noise_type noise;

   typedef double _mu_type;
  _mu_type mu;




  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCurrentModelRequest_

typedef ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<std::allocator<void> > SetCurrentModelRequest;

typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest > SetCurrentModelRequestPtr;
typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest const> SetCurrentModelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_world_ros_plugins_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8222571af4e4180b9b706d1e17ad7e1";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8222571af4e4180ULL;
  static const uint64_t static_value2 = 0xb9b706d1e17ad7e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_world_ros_plugins_msgs/SetCurrentModelRequest";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
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
float64 mean\n\
float64 min\n\
float64 max\n\
float64 noise\n\
float64 mu\n\
";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mean);
      stream.next(m.min);
      stream.next(m.max);
      stream.next(m.noise);
      stream.next(m.mu);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCurrentModelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_world_ros_plugins_msgs::SetCurrentModelRequest_<ContainerAllocator>& v)
  {
    s << indent << "mean: ";
    Printer<double>::stream(s, indent + "  ", v.mean);
    s << indent << "min: ";
    Printer<double>::stream(s, indent + "  ", v.min);
    s << indent << "max: ";
    Printer<double>::stream(s, indent + "  ", v.max);
    s << indent << "noise: ";
    Printer<double>::stream(s, indent + "  ", v.noise);
    s << indent << "mu: ";
    Printer<double>::stream(s, indent + "  ", v.mu);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_SETCURRENTMODELREQUEST_H

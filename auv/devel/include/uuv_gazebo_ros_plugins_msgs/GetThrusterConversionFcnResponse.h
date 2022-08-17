// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/GetThrusterConversionFcnResponse.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETTHRUSTERCONVERSIONFCNRESPONSE_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETTHRUSTERCONVERSIONFCNRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <uuv_gazebo_ros_plugins_msgs/ThrusterConversionFcn.h>

namespace uuv_gazebo_ros_plugins_msgs
{
template <class ContainerAllocator>
struct GetThrusterConversionFcnResponse_
{
  typedef GetThrusterConversionFcnResponse_<ContainerAllocator> Type;

  GetThrusterConversionFcnResponse_()
    : fcn()  {
    }
  GetThrusterConversionFcnResponse_(const ContainerAllocator& _alloc)
    : fcn(_alloc)  {
  (void)_alloc;
    }



   typedef  ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator>  _fcn_type;
  _fcn_type fcn;




  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetThrusterConversionFcnResponse_

typedef ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<std::allocator<void> > GetThrusterConversionFcnResponse;

typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse > GetThrusterConversionFcnResponsePtr;
typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse const> GetThrusterConversionFcnResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_gazebo_ros_plugins_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'uuv_gazebo_ros_plugins_msgs': ['/home/robond/workspace/auv/src/uuv_simulator/uuv_gazebo_plugins/uuv_gazebo_ros_plugins_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b489744fdf1ea3660acd86f33ee041a7";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb489744fdf1ea366ULL;
  static const uint64_t static_value2 = 0x0acd86f33ee041a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/GetThrusterConversionFcnResponse";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/ThrusterConversionFcn fcn\n\
\n\
\n\
================================================================================\n\
MSG: uuv_gazebo_ros_plugins_msgs/ThrusterConversionFcn\n\
# Copyright (c) 2016 The UUV Simulator Authors.\n\
# All rights reserved.\n\
#\n\
# Licensed under the Apache License, Version 2.0 (the \"License\");\n\
# you may not use this file except in compliance with the License.\n\
# You may obtain a copy of the License at\n\
#\n\
#     http://www.apache.org/licenses/LICENSE-2.0\n\
#\n\
# Unless required by applicable law or agreed to in writing, software\n\
# distributed under the License is distributed on an \"AS IS\" BASIS,\n\
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n\
# See the License for the specific language governing permissions and\n\
# limitations under the License.\n\
\n\
string function_name\n\
string[] tags\n\
float64[] data\n\
float64[] lookup_table_input\n\
float64[] lookup_table_output\n\
";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fcn);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetThrusterConversionFcnResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_gazebo_ros_plugins_msgs::GetThrusterConversionFcnResponse_<ContainerAllocator>& v)
  {
    s << indent << "fcn: ";
    s << std::endl;
    Printer< ::uuv_gazebo_ros_plugins_msgs::ThrusterConversionFcn_<ContainerAllocator> >::stream(s, indent + "  ", v.fcn);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETTHRUSTERCONVERSIONFCNRESPONSE_H

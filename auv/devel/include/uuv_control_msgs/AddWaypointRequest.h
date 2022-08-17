// Generated by gencpp from file uuv_control_msgs/AddWaypointRequest.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_ADDWAYPOINTREQUEST_H
#define UUV_CONTROL_MSGS_MESSAGE_ADDWAYPOINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <uuv_control_msgs/Waypoint.h>

namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct AddWaypointRequest_
{
  typedef AddWaypointRequest_<ContainerAllocator> Type;

  AddWaypointRequest_()
    : waypoint()  {
    }
  AddWaypointRequest_(const ContainerAllocator& _alloc)
    : waypoint(_alloc)  {
  (void)_alloc;
    }



   typedef  ::uuv_control_msgs::Waypoint_<ContainerAllocator>  _waypoint_type;
  _waypoint_type waypoint;




  typedef boost::shared_ptr< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddWaypointRequest_

typedef ::uuv_control_msgs::AddWaypointRequest_<std::allocator<void> > AddWaypointRequest;

typedef boost::shared_ptr< ::uuv_control_msgs::AddWaypointRequest > AddWaypointRequestPtr;
typedef boost::shared_ptr< ::uuv_control_msgs::AddWaypointRequest const> AddWaypointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'uuv_control_msgs': ['/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a004c7bf8d1b045f54b4f0d0d7256f0";
  }

  static const char* value(const ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a004c7bf8d1b045ULL;
  static const uint64_t static_value2 = 0xf54b4f0d0d7256f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/AddWaypointRequest";
  }

  static const char* value(const ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
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
uuv_control_msgs/Waypoint waypoint\n\
\n\
================================================================================\n\
MSG: uuv_control_msgs/Waypoint\n\
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
std_msgs/Header header\n\
geometry_msgs/Point point\n\
float64 max_forward_speed\n\
float64 heading_offset\n\
bool use_fixed_heading\n\
float64 radius_of_acceptance\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.waypoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddWaypointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::AddWaypointRequest_<ContainerAllocator>& v)
  {
    s << indent << "waypoint: ";
    s << std::endl;
    Printer< ::uuv_control_msgs::Waypoint_<ContainerAllocator> >::stream(s, indent + "  ", v.waypoint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_ADDWAYPOINTREQUEST_H

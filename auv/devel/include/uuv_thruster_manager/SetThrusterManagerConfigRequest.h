// Generated by gencpp from file uuv_thruster_manager/SetThrusterManagerConfigRequest.msg
// DO NOT EDIT!


#ifndef UUV_THRUSTER_MANAGER_MESSAGE_SETTHRUSTERMANAGERCONFIGREQUEST_H
#define UUV_THRUSTER_MANAGER_MESSAGE_SETTHRUSTERMANAGERCONFIGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_thruster_manager
{
template <class ContainerAllocator>
struct SetThrusterManagerConfigRequest_
{
  typedef SetThrusterManagerConfigRequest_<ContainerAllocator> Type;

  SetThrusterManagerConfigRequest_()
    : base_link()
    , thruster_frame_base()
    , thruster_topic_prefix()
    , thruster_topic_suffix()
    , timeout(0.0)
    , max_thrust(0.0)  {
    }
  SetThrusterManagerConfigRequest_(const ContainerAllocator& _alloc)
    : base_link(_alloc)
    , thruster_frame_base(_alloc)
    , thruster_topic_prefix(_alloc)
    , thruster_topic_suffix(_alloc)
    , timeout(0.0)
    , max_thrust(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _base_link_type;
  _base_link_type base_link;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _thruster_frame_base_type;
  _thruster_frame_base_type thruster_frame_base;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _thruster_topic_prefix_type;
  _thruster_topic_prefix_type thruster_topic_prefix;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _thruster_topic_suffix_type;
  _thruster_topic_suffix_type thruster_topic_suffix;

   typedef double _timeout_type;
  _timeout_type timeout;

   typedef double _max_thrust_type;
  _max_thrust_type max_thrust;


    static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DEFAULT_BASE_LINK;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DEFAULT_THRUSTER_FRAME_BASE;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DEFAULT_PREFIX;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DEFAULT_SUFFIX;
 

  typedef boost::shared_ptr< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetThrusterManagerConfigRequest_

typedef ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<std::allocator<void> > SetThrusterManagerConfigRequest;

typedef boost::shared_ptr< ::uuv_thruster_manager::SetThrusterManagerConfigRequest > SetThrusterManagerConfigRequestPtr;
typedef boost::shared_ptr< ::uuv_thruster_manager::SetThrusterManagerConfigRequest const> SetThrusterManagerConfigRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SetThrusterManagerConfigRequest_<ContainerAllocator>::DEFAULT_BASE_LINK =
        
          "/base_link"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SetThrusterManagerConfigRequest_<ContainerAllocator>::DEFAULT_THRUSTER_FRAME_BASE =
        
          "/thruster_"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SetThrusterManagerConfigRequest_<ContainerAllocator>::DEFAULT_PREFIX =
        
          "thrusters/"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SetThrusterManagerConfigRequest_<ContainerAllocator>::DEFAULT_SUFFIX =
        
          "/input"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_thruster_manager

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "148002d6fd6bf6684e854899710838a2";
  }

  static const char* value(const ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x148002d6fd6bf668ULL;
  static const uint64_t static_value2 = 0x4e854899710838a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_thruster_manager/SetThrusterManagerConfigRequest";
  }

  static const char* value(const ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
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
\n\
string DEFAULT_BASE_LINK            = /base_link\n\
string DEFAULT_THRUSTER_FRAME_BASE  = /thruster_\n\
string DEFAULT_PREFIX               = thrusters/\n\
string DEFAULT_SUFFIX               = /input\n\
\n\
string base_link\n\
string thruster_frame_base\n\
string thruster_topic_prefix\n\
string thruster_topic_suffix\n\
float64 timeout\n\
float64 max_thrust\n\
";
  }

  static const char* value(const ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.base_link);
      stream.next(m.thruster_frame_base);
      stream.next(m.thruster_topic_prefix);
      stream.next(m.thruster_topic_suffix);
      stream.next(m.timeout);
      stream.next(m.max_thrust);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetThrusterManagerConfigRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_thruster_manager::SetThrusterManagerConfigRequest_<ContainerAllocator>& v)
  {
    s << indent << "base_link: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.base_link);
    s << indent << "thruster_frame_base: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.thruster_frame_base);
    s << indent << "thruster_topic_prefix: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.thruster_topic_prefix);
    s << indent << "thruster_topic_suffix: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.thruster_topic_suffix);
    s << indent << "timeout: ";
    Printer<double>::stream(s, indent + "  ", v.timeout);
    s << indent << "max_thrust: ";
    Printer<double>::stream(s, indent + "  ", v.max_thrust);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_THRUSTER_MANAGER_MESSAGE_SETTHRUSTERMANAGERCONFIGREQUEST_H

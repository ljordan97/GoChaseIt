// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/GetModelProperties.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETMODELPROPERTIES_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETMODELPROPERTIES_H

#include <ros/service_traits.h>


#include <uuv_gazebo_ros_plugins_msgs/GetModelPropertiesRequest.h>
#include <uuv_gazebo_ros_plugins_msgs/GetModelPropertiesResponse.h>


namespace uuv_gazebo_ros_plugins_msgs
{

struct GetModelProperties
{

typedef GetModelPropertiesRequest Request;
typedef GetModelPropertiesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetModelProperties
} // namespace uuv_gazebo_ros_plugins_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties > {
  static const char* value()
  {
    return "222d64ab6fa46c24f1abd065170ebe7a";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetModelProperties&) { return value(); }
};

template<>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties > {
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/GetModelProperties";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetModelProperties&) { return value(); }
};


// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesRequest> should match 
// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties > 
template<>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesRequest> should match 
// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties > 
template<>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesRequest>
{
  static const char* value()
  {
    return DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesResponse> should match 
// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties > 
template<>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesResponse> should match 
// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties > 
template<>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesResponse>
{
  static const char* value()
  {
    return DataType< ::uuv_gazebo_ros_plugins_msgs::GetModelProperties >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetModelPropertiesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETMODELPROPERTIES_H
// Generated by gencpp from file uuv_control_msgs/AddWaypoint.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_ADDWAYPOINT_H
#define UUV_CONTROL_MSGS_MESSAGE_ADDWAYPOINT_H

#include <ros/service_traits.h>


#include <uuv_control_msgs/AddWaypointRequest.h>
#include <uuv_control_msgs/AddWaypointResponse.h>


namespace uuv_control_msgs
{

struct AddWaypoint
{

typedef AddWaypointRequest Request;
typedef AddWaypointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddWaypoint
} // namespace uuv_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uuv_control_msgs::AddWaypoint > {
  static const char* value()
  {
    return "e853788769392728a6445812f447d75e";
  }

  static const char* value(const ::uuv_control_msgs::AddWaypoint&) { return value(); }
};

template<>
struct DataType< ::uuv_control_msgs::AddWaypoint > {
  static const char* value()
  {
    return "uuv_control_msgs/AddWaypoint";
  }

  static const char* value(const ::uuv_control_msgs::AddWaypoint&) { return value(); }
};


// service_traits::MD5Sum< ::uuv_control_msgs::AddWaypointRequest> should match 
// service_traits::MD5Sum< ::uuv_control_msgs::AddWaypoint > 
template<>
struct MD5Sum< ::uuv_control_msgs::AddWaypointRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::AddWaypoint >::value();
  }
  static const char* value(const ::uuv_control_msgs::AddWaypointRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::AddWaypointRequest> should match 
// service_traits::DataType< ::uuv_control_msgs::AddWaypoint > 
template<>
struct DataType< ::uuv_control_msgs::AddWaypointRequest>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::AddWaypoint >::value();
  }
  static const char* value(const ::uuv_control_msgs::AddWaypointRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uuv_control_msgs::AddWaypointResponse> should match 
// service_traits::MD5Sum< ::uuv_control_msgs::AddWaypoint > 
template<>
struct MD5Sum< ::uuv_control_msgs::AddWaypointResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::AddWaypoint >::value();
  }
  static const char* value(const ::uuv_control_msgs::AddWaypointResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::AddWaypointResponse> should match 
// service_traits::DataType< ::uuv_control_msgs::AddWaypoint > 
template<>
struct DataType< ::uuv_control_msgs::AddWaypointResponse>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::AddWaypoint >::value();
  }
  static const char* value(const ::uuv_control_msgs::AddWaypointResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_ADDWAYPOINT_H

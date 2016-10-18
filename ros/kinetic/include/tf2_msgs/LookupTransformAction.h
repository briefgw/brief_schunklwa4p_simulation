// Generated by gencpp from file tf2_msgs/LookupTransformAction.msg
// DO NOT EDIT!


#ifndef TF2_MSGS_MESSAGE_LOOKUPTRANSFORMACTION_H
#define TF2_MSGS_MESSAGE_LOOKUPTRANSFORMACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <tf2_msgs/LookupTransformActionGoal.h>
#include <tf2_msgs/LookupTransformActionResult.h>
#include <tf2_msgs/LookupTransformActionFeedback.h>

namespace tf2_msgs
{
template <class ContainerAllocator>
struct LookupTransformAction_
{
  typedef LookupTransformAction_<ContainerAllocator> Type;

  LookupTransformAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  LookupTransformAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::tf2_msgs::LookupTransformActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::tf2_msgs::LookupTransformActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::tf2_msgs::LookupTransformActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> const> ConstPtr;

}; // struct LookupTransformAction_

typedef ::tf2_msgs::LookupTransformAction_<std::allocator<void> > LookupTransformAction;

typedef boost::shared_ptr< ::tf2_msgs::LookupTransformAction > LookupTransformActionPtr;
typedef boost::shared_ptr< ::tf2_msgs::LookupTransformAction const> LookupTransformActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf2_msgs::LookupTransformAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'tf2_msgs': ['/tmp/binarydeb/ros-kinetic-tf2-msgs-0.5.13/msg', '/tmp/binarydeb/ros-kinetic-tf2-msgs-0.5.13/obj-x86_64-linux-gnu/devel/share/tf2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ee01ba91a56c2245c610992dbaa3c37";
  }

  static const char* value(const ::tf2_msgs::LookupTransformAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ee01ba91a56c224ULL;
  static const uint64_t static_value2 = 0x5c610992dbaa3c37ULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf2_msgs/LookupTransformAction";
  }

  static const char* value(const ::tf2_msgs::LookupTransformAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
LookupTransformActionGoal action_goal\n\
LookupTransformActionResult action_result\n\
LookupTransformActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: tf2_msgs/LookupTransformActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
LookupTransformGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: tf2_msgs/LookupTransformGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#Simple API\n\
string target_frame\n\
string source_frame\n\
time source_time\n\
duration timeout\n\
\n\
#Advanced API\n\
time target_time\n\
string fixed_frame\n\
\n\
#Whether or not to use the advanced API\n\
bool advanced\n\
\n\
\n\
================================================================================\n\
MSG: tf2_msgs/LookupTransformActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
LookupTransformResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: tf2_msgs/LookupTransformResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
geometry_msgs/TransformStamped transform\n\
tf2_msgs/TF2Error error\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TransformStamped\n\
# This expresses a transform from coordinate frame header.frame_id\n\
# to the coordinate frame child_frame_id\n\
#\n\
# This message is mostly used by the \n\
# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n\
# See its documentation for more information.\n\
\n\
Header header\n\
string child_frame_id # the frame id of the child frame\n\
Transform transform\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: tf2_msgs/TF2Error\n\
uint8 NO_ERROR = 0\n\
uint8 LOOKUP_ERROR = 1\n\
uint8 CONNECTIVITY_ERROR = 2\n\
uint8 EXTRAPOLATION_ERROR = 3\n\
uint8 INVALID_ARGUMENT_ERROR = 4\n\
uint8 TIMEOUT_ERROR = 5\n\
uint8 TRANSFORM_ERROR = 6\n\
\n\
uint8 error\n\
string error_string\n\
\n\
================================================================================\n\
MSG: tf2_msgs/LookupTransformActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
LookupTransformFeedback feedback\n\
\n\
================================================================================\n\
MSG: tf2_msgs/LookupTransformFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const ::tf2_msgs::LookupTransformAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LookupTransformAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf2_msgs::LookupTransformAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf2_msgs::LookupTransformAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::tf2_msgs::LookupTransformActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::tf2_msgs::LookupTransformActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::tf2_msgs::LookupTransformActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF2_MSGS_MESSAGE_LOOKUPTRANSFORMACTION_H
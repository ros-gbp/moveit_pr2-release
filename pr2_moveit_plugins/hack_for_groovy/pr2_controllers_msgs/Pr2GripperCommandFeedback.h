/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /wg/stor2a/isucan/projects/moveit/devel/share/pr2_controllers_msgs/msg/Pr2GripperCommandFeedback.msg
 *
 */


#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDFEEDBACK_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct Pr2GripperCommandFeedback_
{
  typedef Pr2GripperCommandFeedback_<ContainerAllocator> Type;

  Pr2GripperCommandFeedback_()
    : position(0.0)
    , effort(0.0)
    , stalled(false)
    , reached_goal(false)  {
    }
  Pr2GripperCommandFeedback_(const ContainerAllocator& _alloc)
    : position(0.0)
    , effort(0.0)
    , stalled(false)
    , reached_goal(false)  {
    }



   typedef double _position_type;
  _position_type position;

   typedef double _effort_type;
  _effort_type effort;

   typedef uint8_t _stalled_type;
  _stalled_type stalled;

   typedef uint8_t _reached_goal_type;
  _reached_goal_type reached_goal;




  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Pr2GripperCommandFeedback_

typedef ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<std::allocator<void> > Pr2GripperCommandFeedback;

typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback > Pr2GripperCommandFeedbackPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback const> Pr2GripperCommandFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'actionlib_msgs': ['/opt/ros/groovy/share/actionlib_msgs/msg'], 'trajectory_msgs': ['/opt/ros/groovy/share/trajectory_msgs/msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/msg'], 'pr2_controllers_msgs': ['/wg/stor2a/isucan/projects/moveit/devel/share/pr2_controllers_msgs/msg', '/wg/stor2a/isucan/projects/moveit/devel/share/pr2_controllers_msgs/msg', '/wg/stor2a/isucan/projects/moveit/src/moveit_pr2/pr2_controllers_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4cbff56d3562bcf113da5a5adeef91f";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4cbff56d3562bcfULL;
  static const uint64_t static_value2 = 0x113da5a5adeef91fULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_controllers_msgs/Pr2GripperCommandFeedback";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 position  # The current gripper gap size (in meters)\n\
float64 effort    # The current effort exerted (in Newtons)\n\
bool stalled      # True iff the gripper is exerting max effort and not moving\n\
bool reached_goal # True iff the gripper position has reached the commanded setpoint\n\
\n\
\n\
";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.effort);
      stream.next(m.stalled);
      stream.next(m.reached_goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Pr2GripperCommandFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "effort: ";
    Printer<double>::stream(s, indent + "  ", v.effort);
    s << indent << "stalled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stalled);
    s << indent << "reached_goal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reached_goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDFEEDBACK_H

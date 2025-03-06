// Generated by gencpp from file nlink_parser/LinktrackNodeframe5.msg
// DO NOT EDIT!


#ifndef NLINK_PARSER_MESSAGE_LINKTRACKNODEFRAME5_H
#define NLINK_PARSER_MESSAGE_LINKTRACKNODEFRAME5_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nlink_parser/LinktrackNode5.h>

namespace nlink_parser
{
template <class ContainerAllocator>
struct LinktrackNodeframe5_
{
  typedef LinktrackNodeframe5_<ContainerAllocator> Type;

  LinktrackNodeframe5_()
    : role(0)
    , id(0)
    , local_time(0)
    , system_time(0)
    , voltage(0.0)
    , nodes()  {
    }
  LinktrackNodeframe5_(const ContainerAllocator& _alloc)
    : role(0)
    , id(0)
    , local_time(0)
    , system_time(0)
    , voltage(0.0)
    , nodes(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _role_type;
  _role_type role;

   typedef uint32_t _id_type;
  _id_type id;

   typedef uint32_t _local_time_type;
  _local_time_type local_time;

   typedef uint32_t _system_time_type;
  _system_time_type system_time;

   typedef float _voltage_type;
  _voltage_type voltage;

   typedef std::vector< ::nlink_parser::LinktrackNode5_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nlink_parser::LinktrackNode5_<ContainerAllocator> >::other >  _nodes_type;
  _nodes_type nodes;





  typedef boost::shared_ptr< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> const> ConstPtr;

}; // struct LinktrackNodeframe5_

typedef ::nlink_parser::LinktrackNodeframe5_<std::allocator<void> > LinktrackNodeframe5;

typedef boost::shared_ptr< ::nlink_parser::LinktrackNodeframe5 > LinktrackNodeframe5Ptr;
typedef boost::shared_ptr< ::nlink_parser::LinktrackNodeframe5 const> LinktrackNodeframe5ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator1> & lhs, const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator2> & rhs)
{
  return lhs.role == rhs.role &&
    lhs.id == rhs.id &&
    lhs.local_time == rhs.local_time &&
    lhs.system_time == rhs.system_time &&
    lhs.voltage == rhs.voltage &&
    lhs.nodes == rhs.nodes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator1> & lhs, const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nlink_parser

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26bd069cbc20641e42df0ae46b96110c";
  }

  static const char* value(const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26bd069cbc20641eULL;
  static const uint64_t static_value2 = 0x42df0ae46b96110cULL;
};

template<class ContainerAllocator>
struct DataType< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nlink_parser/LinktrackNodeframe5";
  }

  static const char* value(const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 role\n"
"uint32 id\n"
"uint32 local_time\n"
"uint32 system_time\n"
"float32 voltage\n"
"LinktrackNode5[] nodes\n"
"\n"
"================================================================================\n"
"MSG: nlink_parser/LinktrackNode5\n"
"uint8 role\n"
"uint32 id\n"
"float32 dis\n"
"float32 fp_rssi\n"
"float32 rx_rssi\n"
;
  }

  static const char* value(const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.role);
      stream.next(m.id);
      stream.next(m.local_time);
      stream.next(m.system_time);
      stream.next(m.voltage);
      stream.next(m.nodes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LinktrackNodeframe5_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nlink_parser::LinktrackNodeframe5_<ContainerAllocator>& v)
  {
    s << indent << "role: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.role);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "local_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.local_time);
    s << indent << "system_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.system_time);
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "nodes[]" << std::endl;
    for (size_t i = 0; i < v.nodes.size(); ++i)
    {
      s << indent << "  nodes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nlink_parser::LinktrackNode5_<ContainerAllocator> >::stream(s, indent + "    ", v.nodes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NLINK_PARSER_MESSAGE_LINKTRACKNODEFRAME5_H

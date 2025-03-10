// Generated by gencpp from file px4_uwb/DataDisp.msg
// DO NOT EDIT!


#ifndef PX4_UWB_MESSAGE_DATADISP_H
#define PX4_UWB_MESSAGE_DATADISP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace px4_uwb
{
template <class ContainerAllocator>
struct DataDisp_
{
  typedef DataDisp_<ContainerAllocator> Type;

  DataDisp_()
    : header()
    , a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)
    , e(0.0)  {
    }
  DataDisp_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)
    , e(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _a_type;
  _a_type a;

   typedef double _b_type;
  _b_type b;

   typedef double _c_type;
  _c_type c;

   typedef double _d_type;
  _d_type d;

   typedef double _e_type;
  _e_type e;





  typedef boost::shared_ptr< ::px4_uwb::DataDisp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::px4_uwb::DataDisp_<ContainerAllocator> const> ConstPtr;

}; // struct DataDisp_

typedef ::px4_uwb::DataDisp_<std::allocator<void> > DataDisp;

typedef boost::shared_ptr< ::px4_uwb::DataDisp > DataDispPtr;
typedef boost::shared_ptr< ::px4_uwb::DataDisp const> DataDispConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::px4_uwb::DataDisp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::px4_uwb::DataDisp_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::px4_uwb::DataDisp_<ContainerAllocator1> & lhs, const ::px4_uwb::DataDisp_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.a == rhs.a &&
    lhs.b == rhs.b &&
    lhs.c == rhs.c &&
    lhs.d == rhs.d &&
    lhs.e == rhs.e;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::px4_uwb::DataDisp_<ContainerAllocator1> & lhs, const ::px4_uwb::DataDisp_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace px4_uwb

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::px4_uwb::DataDisp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::px4_uwb::DataDisp_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::px4_uwb::DataDisp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::px4_uwb::DataDisp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::px4_uwb::DataDisp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::px4_uwb::DataDisp_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::px4_uwb::DataDisp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8cc3ee9eb5e91a9074c1e70ea8f247fa";
  }

  static const char* value(const ::px4_uwb::DataDisp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8cc3ee9eb5e91a90ULL;
  static const uint64_t static_value2 = 0x74c1e70ea8f247faULL;
};

template<class ContainerAllocator>
struct DataType< ::px4_uwb::DataDisp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "px4_uwb/DataDisp";
  }

  static const char* value(const ::px4_uwb::DataDisp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::px4_uwb::DataDisp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float64 a\n"
"float64 b\n"
"float64 c\n"
"float64 d\n"
"float64 e\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::px4_uwb::DataDisp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::px4_uwb::DataDisp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
      stream.next(m.d);
      stream.next(m.e);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DataDisp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::px4_uwb::DataDisp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::px4_uwb::DataDisp_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "a: ";
    Printer<double>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<double>::stream(s, indent + "  ", v.b);
    s << indent << "c: ";
    Printer<double>::stream(s, indent + "  ", v.c);
    s << indent << "d: ";
    Printer<double>::stream(s, indent + "  ", v.d);
    s << indent << "e: ";
    Printer<double>::stream(s, indent + "  ", v.e);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PX4_UWB_MESSAGE_DATADISP_H

// Generated by gencpp from file nlink_parser/TofsenseMFrame0.msg
// DO NOT EDIT!


#ifndef NLINK_PARSER_MESSAGE_TOFSENSEMFRAME0_H
#define NLINK_PARSER_MESSAGE_TOFSENSEMFRAME0_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nlink_parser/TofsenseMFrame0Pixel.h>

namespace nlink_parser
{
template <class ContainerAllocator>
struct TofsenseMFrame0_
{
  typedef TofsenseMFrame0_<ContainerAllocator> Type;

  TofsenseMFrame0_()
    : id(0)
    , system_time(0)
    , pixel_count(0)
    , pixels()  {
    }
  TofsenseMFrame0_(const ContainerAllocator& _alloc)
    : id(0)
    , system_time(0)
    , pixel_count(0)
    , pixels(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef uint32_t _system_time_type;
  _system_time_type system_time;

   typedef uint8_t _pixel_count_type;
  _pixel_count_type pixel_count;

   typedef std::vector< ::nlink_parser::TofsenseMFrame0Pixel_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nlink_parser::TofsenseMFrame0Pixel_<ContainerAllocator> >::other >  _pixels_type;
  _pixels_type pixels;





  typedef boost::shared_ptr< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> const> ConstPtr;

}; // struct TofsenseMFrame0_

typedef ::nlink_parser::TofsenseMFrame0_<std::allocator<void> > TofsenseMFrame0;

typedef boost::shared_ptr< ::nlink_parser::TofsenseMFrame0 > TofsenseMFrame0Ptr;
typedef boost::shared_ptr< ::nlink_parser::TofsenseMFrame0 const> TofsenseMFrame0ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator1> & lhs, const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.system_time == rhs.system_time &&
    lhs.pixel_count == rhs.pixel_count &&
    lhs.pixels == rhs.pixels;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator1> & lhs, const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nlink_parser

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b49d724777a20439f181e513a9f9e83";
  }

  static const char* value(const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b49d724777a2043ULL;
  static const uint64_t static_value2 = 0x9f181e513a9f9e83ULL;
};

template<class ContainerAllocator>
struct DataType< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nlink_parser/TofsenseMFrame0";
  }

  static const char* value(const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"uint32 system_time\n"
"uint8 pixel_count\n"
"TofsenseMFrame0Pixel[] pixels\n"
"\n"
"================================================================================\n"
"MSG: nlink_parser/TofsenseMFrame0Pixel\n"
"float32 dis\n"
"uint8 dis_status\n"
"uint16 signal_strength\n"
;
  }

  static const char* value(const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.system_time);
      stream.next(m.pixel_count);
      stream.next(m.pixels);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TofsenseMFrame0_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nlink_parser::TofsenseMFrame0_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nlink_parser::TofsenseMFrame0_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "system_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.system_time);
    s << indent << "pixel_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pixel_count);
    s << indent << "pixels[]" << std::endl;
    for (size_t i = 0; i < v.pixels.size(); ++i)
    {
      s << indent << "  pixels[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nlink_parser::TofsenseMFrame0Pixel_<ContainerAllocator> >::stream(s, indent + "    ", v.pixels[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NLINK_PARSER_MESSAGE_TOFSENSEMFRAME0_H

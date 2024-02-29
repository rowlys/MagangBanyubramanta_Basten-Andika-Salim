// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__TRAITS_HPP_
#define TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tugas_yolo_yolocpp/msg/detail/seen__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tugas_yolo_yolocpp
{

namespace msg
{

inline void to_flow_style_yaml(
  const Seen & msg,
  std::ostream & out)
{
  out << "{";
  // member: gate
  {
    out << "gate: ";
    rosidl_generator_traits::value_to_yaml(msg.gate, out);
    out << ", ";
  }

  // member: flare
  {
    out << "flare: ";
    rosidl_generator_traits::value_to_yaml(msg.flare, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Seen & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gate: ";
    rosidl_generator_traits::value_to_yaml(msg.gate, out);
    out << "\n";
  }

  // member: flare
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flare: ";
    rosidl_generator_traits::value_to_yaml(msg.flare, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Seen & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tugas_yolo_yolocpp

namespace rosidl_generator_traits
{

[[deprecated("use tugas_yolo_yolocpp::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tugas_yolo_yolocpp::msg::Seen & msg,
  std::ostream & out, size_t indentation = 0)
{
  tugas_yolo_yolocpp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tugas_yolo_yolocpp::msg::to_yaml() instead")]]
inline std::string to_yaml(const tugas_yolo_yolocpp::msg::Seen & msg)
{
  return tugas_yolo_yolocpp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tugas_yolo_yolocpp::msg::Seen>()
{
  return "tugas_yolo_yolocpp::msg::Seen";
}

template<>
inline const char * name<tugas_yolo_yolocpp::msg::Seen>()
{
  return "tugas_yolo_yolocpp/msg/Seen";
}

template<>
struct has_fixed_size<tugas_yolo_yolocpp::msg::Seen>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tugas_yolo_yolocpp::msg::Seen>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tugas_yolo_yolocpp::msg::Seen>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__TRAITS_HPP_

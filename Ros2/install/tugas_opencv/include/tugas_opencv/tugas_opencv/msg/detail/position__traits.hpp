// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tugas_opencv:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__POSITION__TRAITS_HPP_
#define TUGAS_OPENCV__MSG__DETAIL__POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tugas_opencv/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tugas_opencv
{

namespace msg
{

inline void to_flow_style_yaml(
  const Position & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_pos
  {
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << ", ";
  }

  // member: y_pos
  {
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << "\n";
  }

  // member: y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Position & msg, bool use_flow_style = false)
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

}  // namespace tugas_opencv

namespace rosidl_generator_traits
{

[[deprecated("use tugas_opencv::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tugas_opencv::msg::Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  tugas_opencv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tugas_opencv::msg::to_yaml() instead")]]
inline std::string to_yaml(const tugas_opencv::msg::Position & msg)
{
  return tugas_opencv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tugas_opencv::msg::Position>()
{
  return "tugas_opencv::msg::Position";
}

template<>
inline const char * name<tugas_opencv::msg::Position>()
{
  return "tugas_opencv/msg/Position";
}

template<>
struct has_fixed_size<tugas_opencv::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tugas_opencv::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tugas_opencv::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUGAS_OPENCV__MSG__DETAIL__POSITION__TRAITS_HPP_

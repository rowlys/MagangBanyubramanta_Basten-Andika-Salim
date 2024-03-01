// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tugas_opencv:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__COLOR__TRAITS_HPP_
#define TUGAS_OPENCV__MSG__DETAIL__COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tugas_opencv/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tugas_opencv
{

namespace msg
{

inline void to_flow_style_yaml(
  const Color & msg,
  std::ostream & out)
{
  out << "{";
  // member: red
  {
    out << "red: ";
    rosidl_generator_traits::value_to_yaml(msg.red, out);
    out << ", ";
  }

  // member: blue
  {
    out << "blue: ";
    rosidl_generator_traits::value_to_yaml(msg.blue, out);
    out << ", ";
  }

  // member: yellow
  {
    out << "yellow: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Color & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red: ";
    rosidl_generator_traits::value_to_yaml(msg.red, out);
    out << "\n";
  }

  // member: blue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue: ";
    rosidl_generator_traits::value_to_yaml(msg.blue, out);
    out << "\n";
  }

  // member: yellow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Color & msg, bool use_flow_style = false)
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
  const tugas_opencv::msg::Color & msg,
  std::ostream & out, size_t indentation = 0)
{
  tugas_opencv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tugas_opencv::msg::to_yaml() instead")]]
inline std::string to_yaml(const tugas_opencv::msg::Color & msg)
{
  return tugas_opencv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tugas_opencv::msg::Color>()
{
  return "tugas_opencv::msg::Color";
}

template<>
inline const char * name<tugas_opencv::msg::Color>()
{
  return "tugas_opencv/msg/Color";
}

template<>
struct has_fixed_size<tugas_opencv::msg::Color>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tugas_opencv::msg::Color>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tugas_opencv::msg::Color>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUGAS_OPENCV__MSG__DETAIL__COLOR__TRAITS_HPP_

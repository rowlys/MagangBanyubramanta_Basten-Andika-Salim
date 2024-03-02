// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tugas_joy:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_JOY__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define TUGAS_JOY__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tugas_joy/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tugas_joy
{

namespace msg
{

inline void to_flow_style_yaml(
  const Command & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_cmd
  {
    out << "x_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.x_cmd, out);
    out << ", ";
  }

  // member: y_cmd
  {
    out << "y_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.y_cmd, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: x_button
  {
    out << "x_button: ";
    rosidl_generator_traits::value_to_yaml(msg.x_button, out);
    out << ", ";
  }

  // member: y_button
  {
    out << "y_button: ";
    rosidl_generator_traits::value_to_yaml(msg.y_button, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.x_cmd, out);
    out << "\n";
  }

  // member: y_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.y_cmd, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: x_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_button: ";
    rosidl_generator_traits::value_to_yaml(msg.x_button, out);
    out << "\n";
  }

  // member: y_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_button: ";
    rosidl_generator_traits::value_to_yaml(msg.y_button, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command & msg, bool use_flow_style = false)
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

}  // namespace tugas_joy

namespace rosidl_generator_traits
{

[[deprecated("use tugas_joy::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tugas_joy::msg::Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  tugas_joy::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tugas_joy::msg::to_yaml() instead")]]
inline std::string to_yaml(const tugas_joy::msg::Command & msg)
{
  return tugas_joy::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tugas_joy::msg::Command>()
{
  return "tugas_joy::msg::Command";
}

template<>
inline const char * name<tugas_joy::msg::Command>()
{
  return "tugas_joy/msg/Command";
}

template<>
struct has_fixed_size<tugas_joy::msg::Command>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tugas_joy::msg::Command>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tugas_joy::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUGAS_JOY__MSG__DETAIL__COMMAND__TRAITS_HPP_

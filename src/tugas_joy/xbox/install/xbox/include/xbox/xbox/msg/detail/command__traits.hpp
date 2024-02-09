// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xbox:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef XBOX__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define XBOX__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xbox/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xbox
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

}  // namespace xbox

namespace rosidl_generator_traits
{

[[deprecated("use xbox::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xbox::msg::Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  xbox::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xbox::msg::to_yaml() instead")]]
inline std::string to_yaml(const xbox::msg::Command & msg)
{
  return xbox::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xbox::msg::Command>()
{
  return "xbox::msg::Command";
}

template<>
inline const char * name<xbox::msg::Command>()
{
  return "xbox/msg/Command";
}

template<>
struct has_fixed_size<xbox::msg::Command>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xbox::msg::Command>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xbox::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XBOX__MSG__DETAIL__COMMAND__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tugas_joy:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_JOY__MSG__DETAIL__COMMAND__STRUCT_HPP_
#define TUGAS_JOY__MSG__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tugas_joy__msg__Command __attribute__((deprecated))
#else
# define DEPRECATED__tugas_joy__msg__Command __declspec(deprecated)
#endif

namespace tugas_joy
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Command_
{
  using Type = Command_<ContainerAllocator>;

  explicit Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_cmd = 0l;
      this->y_cmd = 0l;
      this->yaw = 0l;
      this->depth = 0l;
      this->x_button = 0l;
    }
  }

  explicit Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_cmd = 0l;
      this->y_cmd = 0l;
      this->yaw = 0l;
      this->depth = 0l;
      this->x_button = 0l;
    }
  }

  // field types and members
  using _x_cmd_type =
    int32_t;
  _x_cmd_type x_cmd;
  using _y_cmd_type =
    int32_t;
  _y_cmd_type y_cmd;
  using _yaw_type =
    int32_t;
  _yaw_type yaw;
  using _depth_type =
    int32_t;
  _depth_type depth;
  using _x_button_type =
    int32_t;
  _x_button_type x_button;

  // setters for named parameter idiom
  Type & set__x_cmd(
    const int32_t & _arg)
  {
    this->x_cmd = _arg;
    return *this;
  }
  Type & set__y_cmd(
    const int32_t & _arg)
  {
    this->y_cmd = _arg;
    return *this;
  }
  Type & set__yaw(
    const int32_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__depth(
    const int32_t & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__x_button(
    const int32_t & _arg)
  {
    this->x_button = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tugas_joy::msg::Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const tugas_joy::msg::Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tugas_joy::msg::Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tugas_joy::msg::Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tugas_joy::msg::Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tugas_joy::msg::Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tugas_joy::msg::Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tugas_joy::msg::Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tugas_joy::msg::Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tugas_joy::msg::Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tugas_joy__msg__Command
    std::shared_ptr<tugas_joy::msg::Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tugas_joy__msg__Command
    std::shared_ptr<tugas_joy::msg::Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_ & other) const
  {
    if (this->x_cmd != other.x_cmd) {
      return false;
    }
    if (this->y_cmd != other.y_cmd) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->x_button != other.x_button) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_

// alias to use template instance with default allocator
using Command =
  tugas_joy::msg::Command_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tugas_joy

#endif  // TUGAS_JOY__MSG__DETAIL__COMMAND__STRUCT_HPP_

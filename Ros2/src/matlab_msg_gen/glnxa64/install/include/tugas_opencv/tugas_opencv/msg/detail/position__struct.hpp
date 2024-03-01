// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tugas_opencv:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__POSITION__STRUCT_HPP_
#define TUGAS_OPENCV__MSG__DETAIL__POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tugas_opencv__msg__Position __attribute__((deprecated))
#else
# define DEPRECATED__tugas_opencv__msg__Position __declspec(deprecated)
#endif

namespace tugas_opencv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Position_
{
  using Type = Position_<ContainerAllocator>;

  explicit Position_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_x_pos = 0l;
      this->red_y_pos = 0l;
      this->blue_x_pos = 0l;
      this->blue_y_pos = 0l;
      this->yellow_x_pos = 0l;
      this->yellow_y_pos = 0l;
    }
  }

  explicit Position_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_x_pos = 0l;
      this->red_y_pos = 0l;
      this->blue_x_pos = 0l;
      this->blue_y_pos = 0l;
      this->yellow_x_pos = 0l;
      this->yellow_y_pos = 0l;
    }
  }

  // field types and members
  using _red_x_pos_type =
    int32_t;
  _red_x_pos_type red_x_pos;
  using _red_y_pos_type =
    int32_t;
  _red_y_pos_type red_y_pos;
  using _blue_x_pos_type =
    int32_t;
  _blue_x_pos_type blue_x_pos;
  using _blue_y_pos_type =
    int32_t;
  _blue_y_pos_type blue_y_pos;
  using _yellow_x_pos_type =
    int32_t;
  _yellow_x_pos_type yellow_x_pos;
  using _yellow_y_pos_type =
    int32_t;
  _yellow_y_pos_type yellow_y_pos;

  // setters for named parameter idiom
  Type & set__red_x_pos(
    const int32_t & _arg)
  {
    this->red_x_pos = _arg;
    return *this;
  }
  Type & set__red_y_pos(
    const int32_t & _arg)
  {
    this->red_y_pos = _arg;
    return *this;
  }
  Type & set__blue_x_pos(
    const int32_t & _arg)
  {
    this->blue_x_pos = _arg;
    return *this;
  }
  Type & set__blue_y_pos(
    const int32_t & _arg)
  {
    this->blue_y_pos = _arg;
    return *this;
  }
  Type & set__yellow_x_pos(
    const int32_t & _arg)
  {
    this->yellow_x_pos = _arg;
    return *this;
  }
  Type & set__yellow_y_pos(
    const int32_t & _arg)
  {
    this->yellow_y_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tugas_opencv::msg::Position_<ContainerAllocator> *;
  using ConstRawPtr =
    const tugas_opencv::msg::Position_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tugas_opencv::msg::Position_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tugas_opencv::msg::Position_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tugas_opencv::msg::Position_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tugas_opencv::msg::Position_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tugas_opencv::msg::Position_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tugas_opencv::msg::Position_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tugas_opencv::msg::Position_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tugas_opencv::msg::Position_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tugas_opencv__msg__Position
    std::shared_ptr<tugas_opencv::msg::Position_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tugas_opencv__msg__Position
    std::shared_ptr<tugas_opencv::msg::Position_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Position_ & other) const
  {
    if (this->red_x_pos != other.red_x_pos) {
      return false;
    }
    if (this->red_y_pos != other.red_y_pos) {
      return false;
    }
    if (this->blue_x_pos != other.blue_x_pos) {
      return false;
    }
    if (this->blue_y_pos != other.blue_y_pos) {
      return false;
    }
    if (this->yellow_x_pos != other.yellow_x_pos) {
      return false;
    }
    if (this->yellow_y_pos != other.yellow_y_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Position_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Position_

// alias to use template instance with default allocator
using Position =
  tugas_opencv::msg::Position_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tugas_opencv

#endif  // TUGAS_OPENCV__MSG__DETAIL__POSITION__STRUCT_HPP_

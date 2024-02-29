// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tugas_opencv:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_OPENCV__MSG__DETAIL__COLOR__STRUCT_HPP_
#define TUGAS_OPENCV__MSG__DETAIL__COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tugas_opencv__msg__Color __attribute__((deprecated))
#else
# define DEPRECATED__tugas_opencv__msg__Color __declspec(deprecated)
#endif

namespace tugas_opencv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Color_
{
  using Type = Color_<ContainerAllocator>;

  explicit Color_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0l;
      this->blue = 0l;
      this->yellow = 0l;
    }
  }

  explicit Color_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0l;
      this->blue = 0l;
      this->yellow = 0l;
    }
  }

  // field types and members
  using _red_type =
    int32_t;
  _red_type red;
  using _blue_type =
    int32_t;
  _blue_type blue;
  using _yellow_type =
    int32_t;
  _yellow_type yellow;

  // setters for named parameter idiom
  Type & set__red(
    const int32_t & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__blue(
    const int32_t & _arg)
  {
    this->blue = _arg;
    return *this;
  }
  Type & set__yellow(
    const int32_t & _arg)
  {
    this->yellow = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tugas_opencv::msg::Color_<ContainerAllocator> *;
  using ConstRawPtr =
    const tugas_opencv::msg::Color_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tugas_opencv::msg::Color_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tugas_opencv::msg::Color_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tugas_opencv::msg::Color_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tugas_opencv::msg::Color_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tugas_opencv::msg::Color_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tugas_opencv::msg::Color_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tugas_opencv::msg::Color_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tugas_opencv::msg::Color_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tugas_opencv__msg__Color
    std::shared_ptr<tugas_opencv::msg::Color_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tugas_opencv__msg__Color
    std::shared_ptr<tugas_opencv::msg::Color_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Color_ & other) const
  {
    if (this->red != other.red) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    if (this->yellow != other.yellow) {
      return false;
    }
    return true;
  }
  bool operator!=(const Color_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Color_

// alias to use template instance with default allocator
using Color =
  tugas_opencv::msg::Color_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tugas_opencv

#endif  // TUGAS_OPENCV__MSG__DETAIL__COLOR__STRUCT_HPP_

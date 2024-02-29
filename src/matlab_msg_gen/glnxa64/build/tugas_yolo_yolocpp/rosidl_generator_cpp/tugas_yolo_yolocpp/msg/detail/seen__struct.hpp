// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tugas_yolo_yolocpp:msg/Seen.idl
// generated code does not contain a copyright notice

#ifndef TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__STRUCT_HPP_
#define TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tugas_yolo_yolocpp__msg__Seen __attribute__((deprecated))
#else
# define DEPRECATED__tugas_yolo_yolocpp__msg__Seen __declspec(deprecated)
#endif

namespace tugas_yolo_yolocpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Seen_
{
  using Type = Seen_<ContainerAllocator>;

  explicit Seen_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gate = 0l;
      this->flare = 0l;
    }
  }

  explicit Seen_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gate = 0l;
      this->flare = 0l;
    }
  }

  // field types and members
  using _gate_type =
    int32_t;
  _gate_type gate;
  using _flare_type =
    int32_t;
  _flare_type flare;

  // setters for named parameter idiom
  Type & set__gate(
    const int32_t & _arg)
  {
    this->gate = _arg;
    return *this;
  }
  Type & set__flare(
    const int32_t & _arg)
  {
    this->flare = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator> *;
  using ConstRawPtr =
    const tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tugas_yolo_yolocpp__msg__Seen
    std::shared_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tugas_yolo_yolocpp__msg__Seen
    std::shared_ptr<tugas_yolo_yolocpp::msg::Seen_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Seen_ & other) const
  {
    if (this->gate != other.gate) {
      return false;
    }
    if (this->flare != other.flare) {
      return false;
    }
    return true;
  }
  bool operator!=(const Seen_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Seen_

// alias to use template instance with default allocator
using Seen =
  tugas_yolo_yolocpp::msg::Seen_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tugas_yolo_yolocpp

#endif  // TUGAS_YOLO_YOLOCPP__MSG__DETAIL__SEEN__STRUCT_HPP_

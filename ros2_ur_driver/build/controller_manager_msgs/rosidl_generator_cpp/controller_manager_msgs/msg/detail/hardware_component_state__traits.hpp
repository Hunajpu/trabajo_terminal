// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__TRAITS_HPP_

#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'state'
#include "lifecycle_msgs/msg/detail/state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::msg::HardwareComponentState>()
{
  return "controller_manager_msgs::msg::HardwareComponentState";
}

template<>
inline const char * name<controller_manager_msgs::msg::HardwareComponentState>()
{
  return "controller_manager_msgs/msg/HardwareComponentState";
}

template<>
struct has_fixed_size<controller_manager_msgs::msg::HardwareComponentState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::msg::HardwareComponentState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::msg::HardwareComponentState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/SetHardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__TRAITS_HPP_

#include "controller_manager_msgs/srv/detail/set_hardware_component_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'target_state'
#include "lifecycle_msgs/msg/detail/state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::SetHardwareComponentState_Request>()
{
  return "controller_manager_msgs::srv::SetHardwareComponentState_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::SetHardwareComponentState_Request>()
{
  return "controller_manager_msgs/srv/SetHardwareComponentState_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
// already included above
// #include "lifecycle_msgs/msg/detail/state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::SetHardwareComponentState_Response>()
{
  return "controller_manager_msgs::srv::SetHardwareComponentState_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::SetHardwareComponentState_Response>()
{
  return "controller_manager_msgs/srv/SetHardwareComponentState_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::integral_constant<bool, has_fixed_size<lifecycle_msgs::msg::State>::value> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::integral_constant<bool, has_bounded_size<lifecycle_msgs::msg::State>::value> {};

template<>
struct is_message<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::SetHardwareComponentState>()
{
  return "controller_manager_msgs::srv::SetHardwareComponentState";
}

template<>
inline const char * name<controller_manager_msgs::srv::SetHardwareComponentState>()
{
  return "controller_manager_msgs/srv/SetHardwareComponentState";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::SetHardwareComponentState>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__TRAITS_HPP_

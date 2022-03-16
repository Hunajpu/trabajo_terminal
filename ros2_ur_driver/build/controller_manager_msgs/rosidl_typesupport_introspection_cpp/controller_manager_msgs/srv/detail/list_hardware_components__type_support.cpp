// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_manager_msgs/srv/detail/list_hardware_components__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ListHardwareComponents_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controller_manager_msgs::srv::ListHardwareComponents_Request(_init);
}

void ListHardwareComponents_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controller_manager_msgs::srv::ListHardwareComponents_Request *>(message_memory);
  typed_message->~ListHardwareComponents_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ListHardwareComponents_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::srv::ListHardwareComponents_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ListHardwareComponents_Request_message_members = {
  "controller_manager_msgs::srv",  // message namespace
  "ListHardwareComponents_Request",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs::srv::ListHardwareComponents_Request),
  ListHardwareComponents_Request_message_member_array,  // message members
  ListHardwareComponents_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ListHardwareComponents_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ListHardwareComponents_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ListHardwareComponents_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace controller_manager_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::srv::ListHardwareComponents_Request>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_introspection_cpp::ListHardwareComponents_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, ListHardwareComponents_Request)() {
  return &::controller_manager_msgs::srv::rosidl_typesupport_introspection_cpp::ListHardwareComponents_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_components__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ListHardwareComponents_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controller_manager_msgs::srv::ListHardwareComponents_Response(_init);
}

void ListHardwareComponents_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controller_manager_msgs::srv::ListHardwareComponents_Response *>(message_memory);
  typed_message->~ListHardwareComponents_Response();
}

size_t size_function__ListHardwareComponents_Response__component(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<controller_manager_msgs::msg::HardwareComponentState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ListHardwareComponents_Response__component(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<controller_manager_msgs::msg::HardwareComponentState> *>(untyped_member);
  return &member[index];
}

void * get_function__ListHardwareComponents_Response__component(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<controller_manager_msgs::msg::HardwareComponentState> *>(untyped_member);
  return &member[index];
}

void resize_function__ListHardwareComponents_Response__component(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<controller_manager_msgs::msg::HardwareComponentState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ListHardwareComponents_Response_message_member_array[1] = {
  {
    "component",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<controller_manager_msgs::msg::HardwareComponentState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::srv::ListHardwareComponents_Response, component),  // bytes offset in struct
    nullptr,  // default value
    size_function__ListHardwareComponents_Response__component,  // size() function pointer
    get_const_function__ListHardwareComponents_Response__component,  // get_const(index) function pointer
    get_function__ListHardwareComponents_Response__component,  // get(index) function pointer
    resize_function__ListHardwareComponents_Response__component  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ListHardwareComponents_Response_message_members = {
  "controller_manager_msgs::srv",  // message namespace
  "ListHardwareComponents_Response",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs::srv::ListHardwareComponents_Response),
  ListHardwareComponents_Response_message_member_array,  // message members
  ListHardwareComponents_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ListHardwareComponents_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ListHardwareComponents_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ListHardwareComponents_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace controller_manager_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::srv::ListHardwareComponents_Response>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_introspection_cpp::ListHardwareComponents_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, ListHardwareComponents_Response)() {
  return &::controller_manager_msgs::srv::rosidl_typesupport_introspection_cpp::ListHardwareComponents_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_components__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ListHardwareComponents_service_members = {
  "controller_manager_msgs::srv",  // service namespace
  "ListHardwareComponents",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<controller_manager_msgs::srv::ListHardwareComponents>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ListHardwareComponents_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ListHardwareComponents_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace controller_manager_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<controller_manager_msgs::srv::ListHardwareComponents>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::controller_manager_msgs::srv::rosidl_typesupport_introspection_cpp::ListHardwareComponents_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::controller_manager_msgs::srv::ListHardwareComponents_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::controller_manager_msgs::srv::ListHardwareComponents_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, ListHardwareComponents)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<controller_manager_msgs::srv::ListHardwareComponents>();
}

#ifdef __cplusplus
}
#endif

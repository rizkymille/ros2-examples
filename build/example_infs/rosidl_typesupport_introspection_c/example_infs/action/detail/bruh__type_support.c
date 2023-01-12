// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from example_infs:action/Bruh.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
#include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "example_infs/action/detail/bruh__functions.h"
#include "example_infs/action/detail/bruh__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_Goal__init(message_memory);
}

void Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_fini_function(void * message_memory)
{
  example_infs__action__Bruh_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_member_array[1] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_Goal, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_Goal",  // message name
  1,  // number of fields
  sizeof(example_infs__action__Bruh_Goal),
  Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_member_array,  // message members
  Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_type_support_handle = {
  0,
  &Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Goal)() {
  if (!Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_type_support_handle.typesupport_identifier) {
    Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_Goal__rosidl_typesupport_introspection_c__Bruh_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_infs/action/detail/bruh__functions.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_Result__init(message_memory);
}

void Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_fini_function(void * message_memory)
{
  example_infs__action__Bruh_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_Result, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_Result",  // message name
  1,  // number of fields
  sizeof(example_infs__action__Bruh_Result),
  Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_member_array,  // message members
  Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_type_support_handle = {
  0,
  &Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Result)() {
  if (!Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_type_support_handle.typesupport_identifier) {
    Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_Result__rosidl_typesupport_introspection_c__Bruh_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_infs/action/detail/bruh__functions.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"


// Include directives for member types
// Member `bruh`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_Feedback__init(message_memory);
}

void Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_fini_function(void * message_memory)
{
  example_infs__action__Bruh_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_member_array[1] = {
  {
    "bruh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_Feedback, bruh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_Feedback",  // message name
  1,  // number of fields
  sizeof(example_infs__action__Bruh_Feedback),
  Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_member_array,  // message members
  Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_type_support_handle = {
  0,
  &Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Feedback)() {
  if (!Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_type_support_handle.typesupport_identifier) {
    Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_Feedback__rosidl_typesupport_introspection_c__Bruh_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_infs/action/detail/bruh__functions.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "example_infs/action/bruh.h"
// Member `goal`
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_SendGoal_Request__init(message_memory);
}

void Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_fini_function(void * message_memory)
{
  example_infs__action__Bruh_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(example_infs__action__Bruh_SendGoal_Request),
  Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_member_array,  // message members
  Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_type_support_handle = {
  0,
  &Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Request)() {
  Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Goal)();
  if (!Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_SendGoal_Request__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_infs/action/detail/bruh__functions.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_SendGoal_Response__init(message_memory);
}

void Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_fini_function(void * message_memory)
{
  example_infs__action__Bruh_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(example_infs__action__Bruh_SendGoal_Response),
  Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_member_array,  // message members
  Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_type_support_handle = {
  0,
  &Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Response)() {
  Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_SendGoal_Response__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_service_members = {
  "example_infs__action",  // service namespace
  "Bruh_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_service_type_support_handle = {
  0,
  &example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal)() {
  if (!example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_service_type_support_handle.typesupport_identifier) {
    example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Response)()->data;
  }

  return &example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_infs/action/detail/bruh__functions.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_GetResult_Request__init(message_memory);
}

void Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_fini_function(void * message_memory)
{
  example_infs__action__Bruh_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(example_infs__action__Bruh_GetResult_Request),
  Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_member_array,  // message members
  Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_type_support_handle = {
  0,
  &Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Request)() {
  Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_GetResult_Request__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_infs/action/detail/bruh__functions.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "example_infs/action/bruh.h"
// Member `result`
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_GetResult_Response__init(message_memory);
}

void Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_fini_function(void * message_memory)
{
  example_infs__action__Bruh_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(example_infs__action__Bruh_GetResult_Response),
  Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_member_array,  // message members
  Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_type_support_handle = {
  0,
  &Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Response)() {
  Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Result)();
  if (!Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_GetResult_Response__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_service_members = {
  "example_infs__action",  // service namespace
  "Bruh_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_service_type_support_handle = {
  0,
  &example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult)() {
  if (!example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_service_type_support_handle.typesupport_identifier) {
    example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Response)()->data;
  }

  return &example_infs__action__detail__bruh__rosidl_typesupport_introspection_c__Bruh_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_infs/action/detail/bruh__functions.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "example_infs/action/bruh.h"
// Member `feedback`
// already included above
// #include "example_infs/action/detail/bruh__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_infs__action__Bruh_FeedbackMessage__init(message_memory);
}

void Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_fini_function(void * message_memory)
{
  example_infs__action__Bruh_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_infs__action__Bruh_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_members = {
  "example_infs__action",  // message namespace
  "Bruh_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(example_infs__action__Bruh_FeedbackMessage),
  Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_member_array,  // message members
  Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_type_support_handle = {
  0,
  &Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_FeedbackMessage)() {
  Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Feedback)();
  if (!Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bruh_FeedbackMessage__rosidl_typesupport_introspection_c__Bruh_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

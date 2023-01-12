// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from example_infs:action/Bruh.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
#include "example_infs/action/detail/bruh__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_Goal_type_support_ids_t;

static const _Bruh_Goal_type_support_ids_t _Bruh_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_Goal_type_support_symbol_names_t _Bruh_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Goal)),
  }
};

typedef struct _Bruh_Goal_type_support_data_t
{
  void * data[2];
} _Bruh_Goal_type_support_data_t;

static _Bruh_Goal_type_support_data_t _Bruh_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_Goal_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_Goal)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_Result_type_support_ids_t;

static const _Bruh_Result_type_support_ids_t _Bruh_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_Result_type_support_symbol_names_t _Bruh_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Result)),
  }
};

typedef struct _Bruh_Result_type_support_data_t
{
  void * data[2];
} _Bruh_Result_type_support_data_t;

static _Bruh_Result_type_support_data_t _Bruh_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_Result_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_Result)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_Feedback_type_support_ids_t;

static const _Bruh_Feedback_type_support_ids_t _Bruh_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_Feedback_type_support_symbol_names_t _Bruh_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_Feedback)),
  }
};

typedef struct _Bruh_Feedback_type_support_data_t
{
  void * data[2];
} _Bruh_Feedback_type_support_data_t;

static _Bruh_Feedback_type_support_data_t _Bruh_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_Feedback_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_Feedback)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_SendGoal_Request_type_support_ids_t;

static const _Bruh_SendGoal_Request_type_support_ids_t _Bruh_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_SendGoal_Request_type_support_symbol_names_t _Bruh_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Request)),
  }
};

typedef struct _Bruh_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Bruh_SendGoal_Request_type_support_data_t;

static _Bruh_SendGoal_Request_type_support_data_t _Bruh_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_SendGoal_Request_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_SendGoal_Request)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_SendGoal_Response_type_support_ids_t;

static const _Bruh_SendGoal_Response_type_support_ids_t _Bruh_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_SendGoal_Response_type_support_symbol_names_t _Bruh_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal_Response)),
  }
};

typedef struct _Bruh_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Bruh_SendGoal_Response_type_support_data_t;

static _Bruh_SendGoal_Response_type_support_data_t _Bruh_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_SendGoal_Response_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_SendGoal_Response)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_SendGoal_type_support_ids_t;

static const _Bruh_SendGoal_type_support_ids_t _Bruh_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_SendGoal_type_support_symbol_names_t _Bruh_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_SendGoal)),
  }
};

typedef struct _Bruh_SendGoal_type_support_data_t
{
  void * data[2];
} _Bruh_SendGoal_type_support_data_t;

static _Bruh_SendGoal_type_support_data_t _Bruh_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_SendGoal_service_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Bruh_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Bruh_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Bruh_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_SendGoal)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_GetResult_Request_type_support_ids_t;

static const _Bruh_GetResult_Request_type_support_ids_t _Bruh_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_GetResult_Request_type_support_symbol_names_t _Bruh_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Request)),
  }
};

typedef struct _Bruh_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Bruh_GetResult_Request_type_support_data_t;

static _Bruh_GetResult_Request_type_support_data_t _Bruh_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_GetResult_Request_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_GetResult_Request)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_GetResult_Response_type_support_ids_t;

static const _Bruh_GetResult_Response_type_support_ids_t _Bruh_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_GetResult_Response_type_support_symbol_names_t _Bruh_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult_Response)),
  }
};

typedef struct _Bruh_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Bruh_GetResult_Response_type_support_data_t;

static _Bruh_GetResult_Response_type_support_data_t _Bruh_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_GetResult_Response_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_GetResult_Response)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_GetResult_type_support_ids_t;

static const _Bruh_GetResult_type_support_ids_t _Bruh_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_GetResult_type_support_symbol_names_t _Bruh_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_GetResult)),
  }
};

typedef struct _Bruh_GetResult_type_support_data_t
{
  void * data[2];
} _Bruh_GetResult_type_support_data_t;

static _Bruh_GetResult_type_support_data_t _Bruh_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_GetResult_service_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Bruh_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Bruh_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Bruh_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_GetResult)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_infs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "example_infs/action/detail/bruh__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_infs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Bruh_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Bruh_FeedbackMessage_type_support_ids_t;

static const _Bruh_FeedbackMessage_type_support_ids_t _Bruh_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Bruh_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Bruh_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Bruh_FeedbackMessage_type_support_symbol_names_t _Bruh_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_infs, action, Bruh_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_infs, action, Bruh_FeedbackMessage)),
  }
};

typedef struct _Bruh_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Bruh_FeedbackMessage_type_support_data_t;

static _Bruh_FeedbackMessage_type_support_data_t _Bruh_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Bruh_FeedbackMessage_message_typesupport_map = {
  2,
  "example_infs",
  &_Bruh_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Bruh_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Bruh_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Bruh_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Bruh_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_infs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_infs, action, Bruh_FeedbackMessage)() {
  return &::example_infs::action::rosidl_typesupport_c::Bruh_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "example_infs/action/bruh.h"
#include "example_infs/action/detail/bruh__type_support.h"

static rosidl_action_type_support_t _example_infs__action__Bruh__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_example_infs
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, example_infs, action, Bruh)()
{
  // Thread-safe by always writing the same values to the static struct
  _example_infs__action__Bruh__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, example_infs, action, Bruh_SendGoal)();
  _example_infs__action__Bruh__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, example_infs, action, Bruh_GetResult)();
  _example_infs__action__Bruh__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _example_infs__action__Bruh__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, example_infs, action, Bruh_FeedbackMessage)();
  _example_infs__action__Bruh__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_example_infs__action__Bruh__typesupport_c;
}

#ifdef __cplusplus
}
#endif

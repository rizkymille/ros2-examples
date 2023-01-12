// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_infs:action/Bruh.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__ACTION__DETAIL__BRUH__STRUCT_H_
#define EXAMPLE_INFS__ACTION__DETAIL__BRUH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_Goal
{
  uint32_t count;
} example_infs__action__Bruh_Goal;

// Struct for a sequence of example_infs__action__Bruh_Goal.
typedef struct example_infs__action__Bruh_Goal__Sequence
{
  example_infs__action__Bruh_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_Result
{
  bool status;
} example_infs__action__Bruh_Result;

// Struct for a sequence of example_infs__action__Bruh_Result.
typedef struct example_infs__action__Bruh_Result__Sequence
{
  example_infs__action__Bruh_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'bruh'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_Feedback
{
  rosidl_runtime_c__String bruh;
} example_infs__action__Bruh_Feedback;

// Struct for a sequence of example_infs__action__Bruh_Feedback.
typedef struct example_infs__action__Bruh_Feedback__Sequence
{
  example_infs__action__Bruh_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "example_infs/action/detail/bruh__struct.h"

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  example_infs__action__Bruh_Goal goal;
} example_infs__action__Bruh_SendGoal_Request;

// Struct for a sequence of example_infs__action__Bruh_SendGoal_Request.
typedef struct example_infs__action__Bruh_SendGoal_Request__Sequence
{
  example_infs__action__Bruh_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} example_infs__action__Bruh_SendGoal_Response;

// Struct for a sequence of example_infs__action__Bruh_SendGoal_Response.
typedef struct example_infs__action__Bruh_SendGoal_Response__Sequence
{
  example_infs__action__Bruh_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} example_infs__action__Bruh_GetResult_Request;

// Struct for a sequence of example_infs__action__Bruh_GetResult_Request.
typedef struct example_infs__action__Bruh_GetResult_Request__Sequence
{
  example_infs__action__Bruh_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "example_infs/action/detail/bruh__struct.h"

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_GetResult_Response
{
  int8_t status;
  example_infs__action__Bruh_Result result;
} example_infs__action__Bruh_GetResult_Response;

// Struct for a sequence of example_infs__action__Bruh_GetResult_Response.
typedef struct example_infs__action__Bruh_GetResult_Response__Sequence
{
  example_infs__action__Bruh_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "example_infs/action/detail/bruh__struct.h"

// Struct defined in action/Bruh in the package example_infs.
typedef struct example_infs__action__Bruh_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  example_infs__action__Bruh_Feedback feedback;
} example_infs__action__Bruh_FeedbackMessage;

// Struct for a sequence of example_infs__action__Bruh_FeedbackMessage.
typedef struct example_infs__action__Bruh_FeedbackMessage__Sequence
{
  example_infs__action__Bruh_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_infs__action__Bruh_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INFS__ACTION__DETAIL__BRUH__STRUCT_H_

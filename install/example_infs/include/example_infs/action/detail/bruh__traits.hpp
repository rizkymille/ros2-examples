// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_infs:action/Bruh.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__ACTION__DETAIL__BRUH__TRAITS_HPP_
#define EXAMPLE_INFS__ACTION__DETAIL__BRUH__TRAITS_HPP_

#include "example_infs/action/detail/bruh__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_Goal>()
{
  return "example_infs::action::Bruh_Goal";
}

template<>
inline const char * name<example_infs::action::Bruh_Goal>()
{
  return "example_infs/action/Bruh_Goal";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_infs::action::Bruh_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_Result>()
{
  return "example_infs::action::Bruh_Result";
}

template<>
inline const char * name<example_infs::action::Bruh_Result>()
{
  return "example_infs/action/Bruh_Result";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_infs::action::Bruh_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_Feedback>()
{
  return "example_infs::action::Bruh_Feedback";
}

template<>
inline const char * name<example_infs::action::Bruh_Feedback>()
{
  return "example_infs/action/Bruh_Feedback";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_infs::action::Bruh_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "example_infs/action/detail/bruh__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_SendGoal_Request>()
{
  return "example_infs::action::Bruh_SendGoal_Request";
}

template<>
inline const char * name<example_infs::action::Bruh_SendGoal_Request>()
{
  return "example_infs/action/Bruh_SendGoal_Request";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<example_infs::action::Bruh_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<example_infs::action::Bruh_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<example_infs::action::Bruh_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_SendGoal_Response>()
{
  return "example_infs::action::Bruh_SendGoal_Response";
}

template<>
inline const char * name<example_infs::action::Bruh_SendGoal_Response>()
{
  return "example_infs/action/Bruh_SendGoal_Response";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<example_infs::action::Bruh_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_SendGoal>()
{
  return "example_infs::action::Bruh_SendGoal";
}

template<>
inline const char * name<example_infs::action::Bruh_SendGoal>()
{
  return "example_infs/action/Bruh_SendGoal";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<example_infs::action::Bruh_SendGoal_Request>::value &&
    has_fixed_size<example_infs::action::Bruh_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_infs::action::Bruh_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<example_infs::action::Bruh_SendGoal_Request>::value &&
    has_bounded_size<example_infs::action::Bruh_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<example_infs::action::Bruh_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<example_infs::action::Bruh_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_infs::action::Bruh_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_GetResult_Request>()
{
  return "example_infs::action::Bruh_GetResult_Request";
}

template<>
inline const char * name<example_infs::action::Bruh_GetResult_Request>()
{
  return "example_infs/action/Bruh_GetResult_Request";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<example_infs::action::Bruh_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "example_infs/action/detail/bruh__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_GetResult_Response>()
{
  return "example_infs::action::Bruh_GetResult_Response";
}

template<>
inline const char * name<example_infs::action::Bruh_GetResult_Response>()
{
  return "example_infs/action/Bruh_GetResult_Response";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<example_infs::action::Bruh_Result>::value> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<example_infs::action::Bruh_Result>::value> {};

template<>
struct is_message<example_infs::action::Bruh_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_GetResult>()
{
  return "example_infs::action::Bruh_GetResult";
}

template<>
inline const char * name<example_infs::action::Bruh_GetResult>()
{
  return "example_infs/action/Bruh_GetResult";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<example_infs::action::Bruh_GetResult_Request>::value &&
    has_fixed_size<example_infs::action::Bruh_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_infs::action::Bruh_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<example_infs::action::Bruh_GetResult_Request>::value &&
    has_bounded_size<example_infs::action::Bruh_GetResult_Response>::value
  >
{
};

template<>
struct is_service<example_infs::action::Bruh_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<example_infs::action::Bruh_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_infs::action::Bruh_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "example_infs/action/detail/bruh__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_infs::action::Bruh_FeedbackMessage>()
{
  return "example_infs::action::Bruh_FeedbackMessage";
}

template<>
inline const char * name<example_infs::action::Bruh_FeedbackMessage>()
{
  return "example_infs/action/Bruh_FeedbackMessage";
}

template<>
struct has_fixed_size<example_infs::action::Bruh_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<example_infs::action::Bruh_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<example_infs::action::Bruh_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<example_infs::action::Bruh_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<example_infs::action::Bruh_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<example_infs::action::Bruh>
  : std::true_type
{
};

template<>
struct is_action_goal<example_infs::action::Bruh_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<example_infs::action::Bruh_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<example_infs::action::Bruh_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EXAMPLE_INFS__ACTION__DETAIL__BRUH__TRAITS_HPP_

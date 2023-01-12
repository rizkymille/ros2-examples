// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_infs:action/Bruh.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INFS__ACTION__DETAIL__BRUH__BUILDER_HPP_
#define EXAMPLE_INFS__ACTION__DETAIL__BRUH__BUILDER_HPP_

#include "example_infs/action/detail/bruh__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_Goal_count
{
public:
  Init_Bruh_Goal_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_infs::action::Bruh_Goal count(::example_infs::action::Bruh_Goal::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_Goal>()
{
  return example_infs::action::builder::Init_Bruh_Goal_count();
}

}  // namespace example_infs


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_Result_status
{
public:
  Init_Bruh_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_infs::action::Bruh_Result status(::example_infs::action::Bruh_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_Result>()
{
  return example_infs::action::builder::Init_Bruh_Result_status();
}

}  // namespace example_infs


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_Feedback_bruh
{
public:
  Init_Bruh_Feedback_bruh()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_infs::action::Bruh_Feedback bruh(::example_infs::action::Bruh_Feedback::_bruh_type arg)
  {
    msg_.bruh = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_Feedback>()
{
  return example_infs::action::builder::Init_Bruh_Feedback_bruh();
}

}  // namespace example_infs


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_SendGoal_Request_goal
{
public:
  explicit Init_Bruh_SendGoal_Request_goal(::example_infs::action::Bruh_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::example_infs::action::Bruh_SendGoal_Request goal(::example_infs::action::Bruh_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_SendGoal_Request msg_;
};

class Init_Bruh_SendGoal_Request_goal_id
{
public:
  Init_Bruh_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bruh_SendGoal_Request_goal goal_id(::example_infs::action::Bruh_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Bruh_SendGoal_Request_goal(msg_);
  }

private:
  ::example_infs::action::Bruh_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_SendGoal_Request>()
{
  return example_infs::action::builder::Init_Bruh_SendGoal_Request_goal_id();
}

}  // namespace example_infs


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_SendGoal_Response_stamp
{
public:
  explicit Init_Bruh_SendGoal_Response_stamp(::example_infs::action::Bruh_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::example_infs::action::Bruh_SendGoal_Response stamp(::example_infs::action::Bruh_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_SendGoal_Response msg_;
};

class Init_Bruh_SendGoal_Response_accepted
{
public:
  Init_Bruh_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bruh_SendGoal_Response_stamp accepted(::example_infs::action::Bruh_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Bruh_SendGoal_Response_stamp(msg_);
  }

private:
  ::example_infs::action::Bruh_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_SendGoal_Response>()
{
  return example_infs::action::builder::Init_Bruh_SendGoal_Response_accepted();
}

}  // namespace example_infs


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_GetResult_Request_goal_id
{
public:
  Init_Bruh_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_infs::action::Bruh_GetResult_Request goal_id(::example_infs::action::Bruh_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_GetResult_Request>()
{
  return example_infs::action::builder::Init_Bruh_GetResult_Request_goal_id();
}

}  // namespace example_infs


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_GetResult_Response_result
{
public:
  explicit Init_Bruh_GetResult_Response_result(::example_infs::action::Bruh_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::example_infs::action::Bruh_GetResult_Response result(::example_infs::action::Bruh_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_GetResult_Response msg_;
};

class Init_Bruh_GetResult_Response_status
{
public:
  Init_Bruh_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bruh_GetResult_Response_result status(::example_infs::action::Bruh_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Bruh_GetResult_Response_result(msg_);
  }

private:
  ::example_infs::action::Bruh_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_GetResult_Response>()
{
  return example_infs::action::builder::Init_Bruh_GetResult_Response_status();
}

}  // namespace example_infs


namespace example_infs
{

namespace action
{

namespace builder
{

class Init_Bruh_FeedbackMessage_feedback
{
public:
  explicit Init_Bruh_FeedbackMessage_feedback(::example_infs::action::Bruh_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::example_infs::action::Bruh_FeedbackMessage feedback(::example_infs::action::Bruh_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_infs::action::Bruh_FeedbackMessage msg_;
};

class Init_Bruh_FeedbackMessage_goal_id
{
public:
  Init_Bruh_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bruh_FeedbackMessage_feedback goal_id(::example_infs::action::Bruh_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Bruh_FeedbackMessage_feedback(msg_);
  }

private:
  ::example_infs::action::Bruh_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_infs::action::Bruh_FeedbackMessage>()
{
  return example_infs::action::builder::Init_Bruh_FeedbackMessage_goal_id();
}

}  // namespace example_infs

#endif  // EXAMPLE_INFS__ACTION__DETAIL__BRUH__BUILDER_HPP_

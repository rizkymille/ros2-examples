#include <memory>
#include <string>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "std_msgs/msg/string.hpp"
#include "example_infs/srv/print.hpp"
#include "example_infs/msg/uhuy.hpp"
#include "example_infs/action/bruh.hpp"

using namespace std::chrono_literals;

using std::placeholders::_1;
using std::placeholders::_2;

using Bruh = example_infs::action::Bruh;
using GoalHandleBruh = rclcpp_action::ServerGoalHandle<Bruh>;

class ListenerServerCpp : public rclcpp::Node {

  public:
    // CONSTRUCTOR
    ListenerServerCpp() : Node("listener_server_cpp") {

      RCLCPP_INFO(this->get_logger(), "Initiating listener and server...");

      // subscriber
      sub_message = this->create_subscription<std_msgs::msg::String>("example_msg/message", 10, std::bind(&ListenerServerCpp::callback_msg_msgs, this, _1));
      sub_uhuy = this->create_subscription<example_infs::msg::Uhuy>("example_msg/uhuy", 10, std::bind(&ListenerServerCpp::callback_msg_uhuy, this, _1));

      // service server
      ser_print = this->create_service<example_infs::srv::Print>("example_srv/print", std::bind(&ListenerServerCpp::callback_srv_print, this, _1, _2));
      
      // action server
      ser_act_bruh = rclcpp_action::create_server<Bruh>(
        this,
        "example_act/bruh",
        std::bind(&ListenerServerCpp::handle_goal_bruh, this, _1, _2),
        std::bind(&ListenerServerCpp::handle_cancel_bruh, this, _1),
        std::bind(&ListenerServerCpp::handle_accepted_bruh, this, _1));

      // timer
      timer = this->create_wall_timer(500ms, std::bind(&ListenerServerCpp::timer_loop, this));

    }

  private:

    std::string message_msg;

    std::string uhuy_msg, uhuy_command;

    bool print_continous;
    
    bool handler_execute;
    int count, i;

    // define subscriber variable
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_message;
    
    rclcpp::Subscription<example_infs::msg::Uhuy>::SharedPtr sub_uhuy;

    // define server variable
    rclcpp::Service<example_infs::srv::Print>::SharedPtr ser_print;

    // define action server variables
    rclcpp_action::Server<Bruh>::SharedPtr ser_act_bruh;
    /*
    Single executor style variables
    */
    std::shared_ptr<Bruh::Feedback> feedback_bruh = std::make_shared<Bruh::Feedback>();
    std::shared_ptr<Bruh::Result> result_bruh = std::make_shared<Bruh::Result>();
    std::shared_ptr<GoalHandleBruh> goal_handle_bruh; 

    // define timer variable
    rclcpp::TimerBase::SharedPtr timer;

    void timer_loop() {
      if (print_continous) {
        RCLCPP_INFO(this->get_logger(), "%s", message_msg.c_str());
      }

      if(uhuy_command == "PRINT") {
        RCLCPP_INFO(this->get_logger(), "%s", uhuy_msg.c_str());
      }

      /* 
      Single executor style
      */
      if(handler_execute) {
        handle_executor();
      }
    }

    void callback_msg_msgs(const std_msgs::msg::String::SharedPtr msg) {
      message_msg = msg->data;
    }

    void callback_msg_uhuy(const example_infs::msg::Uhuy::SharedPtr msg) {
      uhuy_msg = msg->uhuy;
      uhuy_command = msg->command;
    }

    
    void callback_srv_print(const example_infs::srv::Print::Request::SharedPtr request, 
                example_infs::srv::Print::Response::SharedPtr response) {
      if (request->command == "PRINT") {
        print_continous = true;
        response->success = true;
      }
      else if (request->command == "STOP") {
        print_continous = false;
        response->success = true;
      }
      else {
        RCLCPP_INFO(this->get_logger(), "Command Invalid!");
        response->success = false;
      }
    }

    // ACTION HANDLERS
    rclcpp_action::GoalResponse handle_goal_bruh(const rclcpp_action::GoalUUID& uuid,
            std::shared_ptr<const Bruh::Goal> goal) {
        
      RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->count);
      
      (void) uuid; // complier error avoidance (unused parameter error)

      // Reject print count over 50
      if (goal->count > 50) {
        return rclcpp_action::GoalResponse::REJECT;
      }
      else {
        count = goal->count;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
      }
    }

    rclcpp_action::CancelResponse handle_cancel_bruh(const std::shared_ptr<GoalHandleBruh> goal_handle) {
      
      RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");

      (void) goal_handle; // complier error avoidance (unused parameter error)
      
      return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted_bruh(const std::shared_ptr<GoalHandleBruh> goal_handle) {
      
      // Single executor style
      goal_handle_bruh = goal_handle;

      handler_execute = true;

      RCLCPP_INFO(this->get_logger(), "Executing goal");

      i = 1;

      /*
      Multiexecutor style

      (void) goal_handle;

      // this needs to return quickly to avoid blocking the executor, so spin up a new thread
      std::thread {std::bind(&ListenerServerCpp::handle_execute, this, _1), goal_handle}.detach();
      */
    }

    void handle_executor() {
      // Check if there is a cancel request
      if (goal_handle_bruh->is_canceling()) {
        RCLCPP_INFO(this->get_logger(), "Goal Canceled");
        result_bruh->status = false;
        goal_handle_bruh->canceled(result_bruh);
        handler_execute = false;
        return;
      }

      // Check if goal is done
      if (i > count) {
        result_bruh->status = true;
        goal_handle_bruh->succeed(result_bruh);
        RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
        handler_execute = false;
        return;
      }

      // Publish feedback
      feedback_bruh->bruh = "BRUH " + std::to_string(i);
      goal_handle_bruh->publish_feedback(feedback_bruh);

      RCLCPP_INFO(this->get_logger(), "Publish Feedback");

      ++i;
    }

    /*
    Multiexecutor style 

    void handle_execute(const std::shared_ptr<GoalHandleBruh> goal_handle) {
      RCLCPP_INFO(this->get_logger(), "Executing goal");
      
      rclcpp::Rate loop_rate(2);
      
      const auto goal = goal_handle->get_goal();

      auto feedback = std::make_shared<Bruh::Feedback>();

      auto result = std::make_shared<Bruh::Result>();

      while(rclcpp::ok()) {
        // Check if there is a cancel request
        if (goal_handle->is_canceling()) {
          RCLCPP_INFO(this->get_logger(), "Goal Canceled");
          result->status = false;
          goal_handle->canceled(result);
          return;
        }

        // Check if goal is done
        if (i == count) {
          RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
          result->status = true;
          goal_handle->succeed(result);
          return;
        }

        // Publish feedback
        feedback->bruh = "BRUH " + std::to_string(i);
        goal_handle->publish_feedback(feedback);

        RCLCPP_INFO(this->get_logger(), "Publish Feedback");

        ++i;

        loop_rate.sleep();
      }
      
    }
    */

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ListenerServerCpp>());
  rclcpp::shutdown();
  return 0;
}

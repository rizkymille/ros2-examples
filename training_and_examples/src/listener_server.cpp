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
      sub_msgs = this->create_subscription<std_msgs::msg::String>("example_msg/msgs", 10, std::bind(&ListenerServerCpp::topic_callback, this, _1));
      sub_uhuy = this->create_subscription<example_infs::msg::Uhuy>("example_msg/uhuy", 10, std::bind(&ListenerServerCpp::uhuy_callback, this, _1));

      // service server
      server_print = this->create_service<example_infs::srv::Print>("example_srv/print", std::bind(&ListenerServerCpp::print_callback, this, _1, _2));
      
      // action server
      srv_act_bruh = rclcpp_action::create_server<Bruh>(
        this,
        "example_act/bruh",
        std::bind(&ListenerServerCpp::handle_goal, this, _1, _2),
        std::bind(&ListenerServerCpp::handle_cancel, this, _1),
        std::bind(&ListenerServerCpp::handle_accepted, this, _1));

      // timer
      timer = this->create_wall_timer(500ms, std::bind(&ListenerServerCpp::timer_callback, this));

    }

  private:

    std::string message;

    std::string uhuy_msg, uhuy_command;

    bool print_continous;
    
    bool handler_execute;
    int count, i;

    // define subscriber variable
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_msgs;
    
    rclcpp::Subscription<example_infs::msg::Uhuy>::SharedPtr sub_uhuy;

    // define server variable
    rclcpp::Service<example_infs::srv::Print>::SharedPtr server_print;

    // define action server variables
    rclcpp_action::Server<Bruh>::SharedPtr srv_act_bruh;
    /*
    Single executor style variables
    */
    std::shared_ptr<Bruh::Feedback> feedback = std::make_shared<Bruh::Feedback>();
    std::shared_ptr<Bruh::Result> result = std::make_shared<Bruh::Result>();
    std::shared_ptr<GoalHandleBruh> goal_h; 

    // define timer variable
    rclcpp::TimerBase::SharedPtr timer;

    void timer_callback() {
      if (print_continous) {
        RCLCPP_INFO(this->get_logger(), "%s", message.c_str());
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

    void topic_callback(const std_msgs::msg::String::SharedPtr msg) {
      message = msg->data;
    }

    void uhuy_callback(const example_infs::msg::Uhuy::SharedPtr msg) {
      uhuy_msg = msg->uhuy;
      uhuy_command = msg->command;
    }

    
    void print_callback(const example_infs::srv::Print::Request::SharedPtr request, 
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
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID& uuid,
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

    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleBruh> goal_handle) {
      
      RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");

      goal_h = goal_handle; // pass the goal_handle. Single executor style
      // (void) goal_handle; // complier error avoidance (unused parameter error) Multiexecutor style
      
      return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandleBruh> goal_handle) {
      
      // Single executor style
      goal_h = goal_handle;

      handler_execute = true;

      RCLCPP_INFO(this->get_logger(), "Executing goal");

      i = 0;

      /*
      Multiexecutor style

      (void) goal_handle;

      // this needs to return quickly to avoid blocking the executor, so spin up a new thread
      std::thread {std::bind(&ListenerServerCpp::handle_execute, this, _1), goal_handle}.detach();
      */
    }

    void handle_executor() {
      // Check if there is a cancel request
      if (goal_h->is_canceling()) {
        RCLCPP_INFO(this->get_logger(), "Goal Canceled");
        result->status = false;
        goal_h->canceled(result);
        handler_execute = false;
        return;
      }

      // Check if goal is done
      if (i == count) {
        result->status = true;
        goal_h->succeed(result);
        RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
        handler_execute = false;
        return;
      }

      // Publish feedback
      feedback->bruh = "BRUH " + std::to_string(i);
      goal_h->publish_feedback(feedback);

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
          result->status = true;
          goal_handle->succeed(result);
          RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
          return;
        }

        // Publish feedback
        feedback->bruh = std::string("BRUH %d", i);
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

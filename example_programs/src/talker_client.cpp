#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <cstdlib>

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
using GoalHandleBruh = rclcpp_action::ClientGoalHandle<Bruh>;

class TalkerClientCpp : public rclcpp::Node {

  public:
  
    // CONSTRUCTOR //
    TalkerClientCpp() : Node("talker_client_cpp") {

      RCLCPP_INFO(this->get_logger(), "Initiating talker and client...");
      // publisher
      pub_message = this->create_publisher<std_msgs::msg::String>("example_msg/message", 10);

      pub_uhuy = this->create_publisher<example_infs::msg::Uhuy>("example_msg/uhuy", 10);

      // timer
      timer = this->create_wall_timer(500ms, std::bind(&TalkerClientCpp::timer_loop, this));

      // service client
      cli_print = this->create_client<example_infs::srv::Print>("example_srv/print");

      // action client
      cli_act_bruh = rclcpp_action::create_client<Bruh>(this, "example_act/bruh");

      // parameters
      this->declare_parameter<std::string>("example_param/input", "bruh");

      this->declare_parameter<int>("example_param/bruh", 0);

      TalkerClientCpp::service_check(); // check if service server online

    }

  private:
    
    std::string old_print, param_input;

    int old_bruh, count_bruh;

    // create timer variable
    rclcpp::TimerBase::SharedPtr timer;

    // create publisher variable
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_message;

    rclcpp::Publisher<example_infs::msg::Uhuy>::SharedPtr pub_uhuy;

    // create service client variable
    rclcpp::Client<example_infs::srv::Print>::SharedPtr cli_print;

    // create action client variable
    rclcpp_action::Client<Bruh>::SharedPtr cli_act_bruh;

    // basically void loop in arduino, but more e p i c
    void timer_loop() {
      this->get_parameter("example_param/input", param_input);
      this->get_parameter("example_param/bruh", count_bruh);

      auto msg = std_msgs::msg::String();
      msg.data = "Halo dunia!";
      pub_message->publish(msg);

      auto uhuy_msg = example_infs::msg::Uhuy();
      uhuy_msg.uhuy = "UHUY";
      uhuy_msg.command = "PRINT";
      pub_uhuy->publish(uhuy_msg);

      request_print(param_input);
      send_goal(count_bruh);
    }

    // make sure all service online (in the beginning only, cause wait_for_service will mess granularity)
    void service_check() {
      while ( (!cli_print->wait_for_service(1s)) && (!cli_act_bruh->wait_for_action_server(1s)) ) {
        if (!rclcpp::ok()) {
          RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for server. Exiting");
          return;
        }
        RCLCPP_WARN(this->get_logger(), "Service/Action not available, waiting...");
      }
    }
 
    void request_print(const std::string& input) {

      if (input != old_print) {

        auto request = std::make_shared<example_infs::srv::Print::Request>();
        request->command = input; 

        cli_print->async_send_request(request, std::bind(&TalkerClientCpp::callback_fut_print, this, _1));  // with a callback function
        old_print = input;
      } 
 
    }

    void callback_fut_print(const rclcpp::Client<example_infs::srv::Print>::SharedFuture future) {
      std::shared_ptr<example_infs::srv::Print::Response> result = future.get();
      RCLCPP_INFO(this->get_logger(), "Service call responded with %s", result->success ? "true" : "false");

      // this function could return the other than void type. might be good for future reference
      // return true;
      // return false if something goes wrong
    }

    // ACTION FUNCTIONS
    void send_goal(const int& _count_bruh) {

      if ((old_bruh != _count_bruh) && (_count_bruh > 0)) {
        auto goal_msg = Bruh::Goal();
        goal_msg.count = _count_bruh;

        RCLCPP_INFO(this->get_logger(), "Sending goal");

        auto send_goal_options = rclcpp_action::Client<Bruh>::SendGoalOptions();
        send_goal_options.goal_response_callback = std::bind(&TalkerClientCpp::goal_response_callback_bruh, this, _1);
        send_goal_options.feedback_callback = std::bind(&TalkerClientCpp::feedback_callback_bruh, this, _1, _2);
        send_goal_options.result_callback = std::bind(&TalkerClientCpp::result_callback_bruh, this, _1);
        
        cli_act_bruh->async_send_goal(goal_msg, send_goal_options);
        old_bruh = _count_bruh;
      }
      
    }

    // ACTION CALLBACKS
    void goal_response_callback_bruh(std::shared_future<GoalHandleBruh::SharedPtr> future) {
      auto goal_handle = future.get();
      if (!goal_handle) {
        RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
      } 
      else {
        RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
      }
    }

    void feedback_callback_bruh(
      GoalHandleBruh::SharedPtr,
      const std::shared_ptr<const Bruh::Feedback> feedback) {

      RCLCPP_INFO(this->get_logger(), feedback->bruh.c_str());
    }

    void result_callback_bruh(const GoalHandleBruh::WrappedResult& result) {
      switch (result.code) {
        case rclcpp_action::ResultCode::SUCCEEDED:
          RCLCPP_INFO(this->get_logger(), "Service call responded with %s", result.result->status ? "true" : "false");
          return;
        case rclcpp_action::ResultCode::ABORTED:
          RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
          return;
        case rclcpp_action::ResultCode::CANCELED:
          RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
          return;
        default:
          RCLCPP_ERROR(this->get_logger(), "Unknown result code");
          return;
      }
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TalkerClientCpp>());
  rclcpp::shutdown();
  return 0;
}

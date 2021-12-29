#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "example_msgs/srv/print.hpp"

using namespace std::chrono_literals;

using std::placeholders::_1;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class TalkerClientCpp : public rclcpp::Node {

  public:
    // CONSTRUCTOR //
    TalkerClientCpp() : Node("talker_client_cpp") {
      // publisher
      pub_msgs = this->create_publisher<std_msgs::msg::String>("example_msgs/msgs", 10);

      // timer
      timer_ = this->create_wall_timer(500ms, std::bind(&TalkerClientCpp::timer_callback, this));

      // client
      cli_print = this->create_client<example_msgs::srv::Print>("example_srv/print");

      TalkerClientCpp::service_check();

    }

  private:
    // basically void loop in arduino, but more e p i c
    void timer_callback() {
      auto msg = std_msgs::msg::String();
      msg.data = "Halo dunia!";
      pub_msgs->publish(msg);
      request_print("PRINT");
    }

    // make sure all service online (in the beginning only, cause wait_for_service will mess granularity)
    void service_check() {
      while (!cli_print->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
          RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
          return;
        }
        RCLCPP_INFO(this->get_logger(), "Service not available, waiting...");
      }
    }
 
    void request_print(const std::string& input) {
      std::string new_print = input;

      if (new_print != old_print) {

        auto request = std::make_shared<example_msgs::srv::Print::Request>();
        request->command = input; 

        cli_print->async_send_request(request, std::bind(&TalkerClientCpp::future_callback, this, _1));  // with a callback function
      } 
 
    }

    void future_callback(const rclcpp::Client<example_msgs::srv::Print>::SharedFuture future) {
      std::shared_ptr<example_msgs::srv::Print::Response> result = future.get();
      RCLCPP_INFO(this->get_logger(), "Service call responded with %s", result->success ? "true" : "false");
      
      /* this function could return the other than void type. Interesting for future reference */
      // return true;
      // return false if something goes wrong
    }

    std::string old_print;

    // create timer object
    rclcpp::TimerBase::SharedPtr timer_;

    // create publisher object
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_msgs;

    // create service client object
    rclcpp::Client<example_msgs::srv::Print>::SharedPtr cli_print;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Initiating talker and client...");
  rclcpp::spin(std::make_shared<TalkerClientCpp>());
  rclcpp::shutdown();
  return 0;
}
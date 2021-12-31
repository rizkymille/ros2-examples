#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "example_msgs/srv/print.hpp"
#include "example_msgs/msg/uhuy.hpp"

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

      pub_uhuy = this->create_publisher<example_msgs::msg::Uhuy>("example_msgs/uhuy", 10);

      // timer
      timer = this->create_wall_timer(500ms, std::bind(&TalkerClientCpp::timer_callback, this));

      // client
      cli_print = this->create_client<example_msgs::srv::Print>("example_srv/print");

      // parameters
      this->declare_parameter<std::string>("example_param/Input");

      TalkerClientCpp::service_check();

    }

  private:
    
    std::string old_print;

    std::string param_msgs;

    // create timer object
    rclcpp::TimerBase::SharedPtr timer;

    // create publisher object
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_msgs;

    rclcpp::Publisher<example_msgs::msg::Uhuy>::SharedPtr pub_uhuy;

    // create service client object
    rclcpp::Client<example_msgs::srv::Print>::SharedPtr cli_print;

    // basically void loop in arduino, but more e p i c
    void timer_callback() {
      this->get_parameter("example_param/Input", param_msgs);

      auto msg = std_msgs::msg::String();
      msg.data = "Halo dunia!";
      pub_msgs->publish(msg);

      auto uhuy_msg = example_msgs::msg::Uhuy();
      uhuy_msg.uhuy = "UHUY";
      uhuy_msg.command = "PRINT";
      pub_uhuy->publish(uhuy_msg);

      request_print(param_msgs);
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
        old_print = input;
      } 
 
    }

    void future_callback(const rclcpp::Client<example_msgs::srv::Print>::SharedFuture future) {
      std::shared_ptr<example_msgs::srv::Print::Response> result = future.get();
      RCLCPP_INFO(this->get_logger(), "Service call responded with %s", result->success ? "true" : "false");

      /* this function could return the other than void type. Interesting for future reference */
      // return true;
      // return false if something goes wrong
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Initiating talker and client...");
  rclcpp::spin(std::make_shared<TalkerClientCpp>());
  rclcpp::shutdown();
  return 0;
}
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "example_msgs/srv/print.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class TalkerClient : public rclcpp::Node {

  rclcpp::executors::SingleThreadedExecutor executor;

  public:
    TalkerClient() : Node("talker_client") {
      // define publisher variable  
      pub_msgs = this->create_publisher<std_msgs::msg::String>("example_msgs/msgs", 10);

      // define timer variable
      timer_ = this->create_wall_timer(500ms, std::bind(&TalkerClient::timer_callback, this));

      server_client = this->create_client<example_msgs::srv::Print>("example_srv/print");
    }

  private:
    // define what to do when timer ticks
    void timer_callback() {
      auto msg = std_msgs::msg::String();
      msg.data = "Halo dunia!";
      pub_msgs->publish(msg);
      request_print("PRINT");
    }

    void request_print(const std::string& input) {
      std::string new_print = input;

      if (new_print != old_print) {

        auto request = std::make_shared<example_msgs::srv::Print::Request>();
        request->command = input; 
        while (!server_client->wait_for_service(1s)) {
          if (!rclcpp::ok()) {
            RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
            return;
          }
          RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
        }

        auto result = server_client->async_send_request(request);
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) == rclcpp::FutureReturnCode::SUCCESS) {
          RCLCPP_INFO(this->get_logger(), "%d", result.get()->success);
          old_print = new_print;
        } 
        else {
          RCLCPP_ERROR(this->get_logger(), "Failed to call service");
        }
      } 
 
    }

    std::string old_print;

    // create timer variable
    rclcpp::TimerBase::SharedPtr timer_;
    // create publisher variable
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_msgs;

    rclcpp::Client<example_msgs::srv::Print>::SharedPtr server_client;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Initiating talker...");
  rclcpp::spin(std::make_shared<TalkerClient>());
  rclcpp::shutdown();
  return 0;
}

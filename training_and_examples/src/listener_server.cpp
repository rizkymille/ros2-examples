#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "example_msgs/srv/print.hpp"

// placeholders bergantung pada banyaknya parameter pada fungsi
using std::placeholders::_1;
using std::placeholders::_2;

class ListenerServerCpp : public rclcpp::Node {

  public:
    // CONSTRUCTOR
    ListenerServerCpp() : Node("listener_server_cpp") {
      sub_msgs = this->create_subscription<std_msgs::msg::String>("example_msgs/msgs", 10, std::bind(&ListenerServerCpp::topic_callback, this, _1));
      server_print = this->create_service<example_msgs::srv::Print>("example_srv/print", std::bind(&ListenerServerCpp::print, this, _1, _2));
    }

  private:
    // run callback function

    // void topic_callback(const std_msgs::msg::String::SharedPtr msg) const <= fungsi ada const karena isi fungsi tidak ada perubahan

    void topic_callback(const std_msgs::msg::String::SharedPtr msg) {
      message = msg->data;
    }
    
    void print(const example_msgs::srv::Print::Request::SharedPtr request, 
                example_msgs::srv::Print::Response::SharedPtr response) {
      if (request->command == "PRINT") {
        RCLCPP_INFO(this->get_logger(), "%s", message.c_str());
        response->success = true;
      }
      else if (request->command == "STOP") {
        response->success = true;
      }
      else {
        RCLCPP_INFO(this->get_logger(), "Command Invalid!");
        response->success = false;
      }
    }

    std::string message;

    // define subscriber variable
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_msgs;

    // define server variable
    rclcpp::Service<example_msgs::srv::Print>::SharedPtr server_print;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Initiating listener and server...");
  rclcpp::spin(std::make_shared<ListenerServerCpp>());
  rclcpp::shutdown();
  return 0;
}

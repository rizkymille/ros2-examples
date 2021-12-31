#include <memory>
#include <string>

#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "example_msgs/srv/print.hpp"
#include "example_msgs/msg/uhuy.hpp"

using namespace std::chrono_literals;

using std::placeholders::_1;
using std::placeholders::_2;

class ListenerServerCpp : public rclcpp::Node {

  public:
    // CONSTRUCTOR
    ListenerServerCpp() : Node("listener_server_cpp") {
      sub_msgs = this->create_subscription<std_msgs::msg::String>("example_msgs/msgs", 10, std::bind(&ListenerServerCpp::topic_callback, this, _1));
      
      sub_uhuy = this->create_subscription<example_msgs::msg::Uhuy>("example_msgs/uhuy", 10, std::bind(&ListenerServerCpp::uhuy_callback, this, _1));

      server_print = this->create_service<example_msgs::srv::Print>("example_srv/print", std::bind(&ListenerServerCpp::print, this, _1, _2));

      timer = this->create_wall_timer(500ms, std::bind(&ListenerServerCpp::timer_callback, this));

      /*
      placeholder!
      topic_callback() <- topic_callback(x,y)
      std::bind(topic_callback(), this, _1, _2)
      */
    }

  private:

    std::string message;

    std::string uhuy_msg, uhuy_command;

    bool print_continous;

    // define subscriber variable
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_msgs;
    
    rclcpp::Subscription<example_msgs::msg::Uhuy>::SharedPtr sub_uhuy;

    // define server variable
    rclcpp::Service<example_msgs::srv::Print>::SharedPtr server_print;

    rclcpp::TimerBase::SharedPtr timer;

    void timer_callback() {
      if (print_continous) {
        RCLCPP_INFO(this->get_logger(), "%s", message.c_str());
      }

      if(uhuy_command == "PRINT") {
        RCLCPP_INFO(this->get_logger(), "%s", uhuy_msg.c_str());
      }
    }

    // void topic_callback(const std_msgs::msg::String::SharedPtr msg) const <= fungsi ada const karena isi fungsi tidak ada perubahan

    void topic_callback(const std_msgs::msg::String::SharedPtr msg) {
      message = msg->data;
    }

    void uhuy_callback(const example_msgs::msg::Uhuy::SharedPtr msg) {
      uhuy_msg = msg->uhuy;
      uhuy_command = msg->command;
    }

    
    void print(const example_msgs::srv::Print::Request::SharedPtr request, 
                example_msgs::srv::Print::Response::SharedPtr response) {
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


};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Initiating listener and server...");
  rclcpp::spin(std::make_shared<ListenerServerCpp>());
  rclcpp::shutdown();
  return 0;
}

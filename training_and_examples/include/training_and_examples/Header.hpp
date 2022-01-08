#ifndef HEADER
#define HEADER

#include <string>
#include <memory>
#include <chrono>
#include <functional>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"

#include "std_msgs/msg/string.hpp"
#include "example_infs/msg/uhuy.hpp"
#include "example_infs/srv/print.hpp"

using namespace std::chrono_literals;

using std::placeholders::_1;
using std::placeholders::_2;

class Header {
  public:
    Header(const rclcpp::Node::SharedPtr node); // CONSTRUCTOR
    ~Header(); // DESTRUCTOR

    std::string param_msgs;

    // API
    void print_uhuy();
    void publish_msg();
    void publish_uhuy();
    void get_param();
    void service_check();
    void request_print(const std::string& input);

  private:
    rclcpp::Node::SharedPtr node_;

    std::string message, old_print;
    std::string uhuy_msg, uhuy_command;

    bool print_continous = false;

    // create publisher object
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_msgs;
    rclcpp::Publisher<example_infs::msg::Uhuy>::SharedPtr pub_uhuy;

    // create subscriber object
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_msgs;
    rclcpp::Subscription<example_infs::msg::Uhuy>::SharedPtr sub_uhuy;

    // create service client object
    rclcpp::Client<example_infs::srv::Print>::SharedPtr cli_print;

    // create service server object
    rclcpp::Service<example_infs::srv::Print>::SharedPtr server_print;

    void future_callback(const rclcpp::Client<example_infs::srv::Print>::SharedFuture future);

    void topic_callback(const std_msgs::msg::String::SharedPtr msg);

    void uhuy_callback(const example_infs::msg::Uhuy::SharedPtr msg);

    void print_callback(const example_infs::srv::Print::Request::SharedPtr request, 
                example_infs::srv::Print::Response::SharedPtr response);

};

#endif // HEADER
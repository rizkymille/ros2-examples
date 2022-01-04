#include "training_and_examples/Header.hpp"

// CONSTRUCTOR //
Header::Header(rclcpp::Node::SharedPtr node) : node_(node) {
  
  // publisher
  pub_msgs = node_->create_publisher<std_msgs::msg::String>("example_msg/msgs", 10);

  pub_uhuy = node_->create_publisher<example_infs::msg::Uhuy>("example_msg/uhuy", 10);

  // subscriber
  sub_msgs = node_->create_subscription<std_msgs::msg::String>("example_msg/msgs", 10, std::bind(&Header::topic_callback, this, _1));
      
  sub_uhuy = node_->create_subscription<example_infs::msg::Uhuy>("example_msg/uhuy", 10, std::bind(&Header::uhuy_callback, this, _1));

  // server
  server_print = node_->create_service<example_infs::srv::Print>("example_srv/print", std::bind(&Header::print_callback, this, _1, _2));

  // client
  cli_print = node_->create_client<example_infs::srv::Print>("example_srv/print");

  // parameters
  node_->declare_parameter<std::string>("example_param/Input", "PRINT");

  Header::service_check();
  Header::get_param();
}

// DESTRUCTOR //
Header::~Header() {}

// APIs //
// Private
void Header::service_check() {
  while (!cli_print->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(node_->get_logger(), "Interrupted while waiting for the service. Exiting.");
      return;
    }
    
    RCLCPP_INFO(node_->get_logger(), "Service not available, waiting...");
  }
}

void Header::get_param() {
  node_->get_parameter("example_param/Input", param_msgs);
}

// Public
void Header::print_uhuy() {
  if (print_continous) {
    RCLCPP_INFO(node_->get_logger(), "%s", message.c_str());
  }

  if(uhuy_command == "PRINT") {
    RCLCPP_INFO(node_->get_logger(), "%s", uhuy_msg.c_str());
  }
}

void Header::publish_msg() {
  auto msg = std_msgs::msg::String();
  msg.data = "Halo dunia!";
  pub_msgs->publish(msg);
}

void Header::publish_uhuy() {
  auto uhuy_msg = example_infs::msg::Uhuy();
  uhuy_msg.uhuy = "UHUY";
  uhuy_msg.command = "PRINT";
  pub_uhuy->publish(uhuy_msg);
}

// CALLBACKS //
void Header::future_callback(const rclcpp::Client<example_infs::srv::Print>::SharedFuture future) {
  std::shared_ptr<example_infs::srv::Print::Response> result = future.get();
  RCLCPP_INFO(node_->get_logger(), "Service call responded with %s", result->success ? "true" : "false");
}

void Header::topic_callback(const std_msgs::msg::String::SharedPtr msg) {
  message = msg->data;
}

void Header::uhuy_callback(const example_infs::msg::Uhuy::SharedPtr msg) {
  uhuy_msg = msg->uhuy;
  uhuy_command = msg->command;
}

void Header::print_callback(const example_infs::srv::Print::Request::SharedPtr request, 
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
    RCLCPP_INFO(node_->get_logger(), "Command Invalid!");
    response->success = false;
  }
}
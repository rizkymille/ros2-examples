#include "example_programs/HeaderMultiexecutor.hpp"

// CONSTRUCTOR //
Header::Header(const rclcpp::Node::SharedPtr node, const rclcpp::CallbackGroup::SharedPtr cb_group_) : node_(node) {
  
  // publisher
  pub_message = node_->create_publisher<std_msgs::msg::String>("example_msg/message", 10);

  pub_uhuy = node_->create_publisher<example_infs::msg::Uhuy>("example_msg/uhuy", 10);

  auto sub_opt = rclcpp::SubscriptionOptions();
  sub_opt.callback_group = cb_group_;

  // subscriber
  sub_message = node_->create_subscription<std_msgs::msg::String>("example_msg/message", 10, std::bind(&Header::callback_msg_message, this, _1), sub_opt);
      
  sub_uhuy = node_->create_subscription<example_infs::msg::Uhuy>("example_msg/uhuy", 10, std::bind(&Header::callback_msg_uhuy, this, _1), sub_opt);

  // server
  ser_print = node_->create_service<example_infs::srv::Print>("example_srv/print", std::bind(&Header::callback_srv_print, this, _1, _2), rmw_qos_profile_services_default, cb_group_);

  // client
  cli_print = node_->create_client<example_infs::srv::Print>("example_srv/print");

  // parameters
  node_->declare_parameter<std::string>("example_param/input", "PRINT");

  timer_operate = node_->create_wall_timer(500ms, std::bind(&Header::cb_operate, this), cb_group_);

}

// DESTRUCTOR //
Header::~Header() {}

// APIs //
// Public
void Header::service_check() {
  while (!cli_print->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(node_->get_logger(), "Interrupted while waiting for server. Exiting");
      return;
    }
    RCLCPP_WARN(node_->get_logger(), "Service not available, waiting...");
  }
}

void Header::get_param() {
  node_->get_parameter("example_param/input", param_input);
}

void Header::print_uhuy() {
  if (print_continous) {
    RCLCPP_INFO(node_->get_logger(), "%s", message_msg.c_str());
  }

  if(uhuy_command == "PRINT") {
    RCLCPP_INFO(node_->get_logger(), "%s", uhuy_msg.c_str());
  }
}

void Header::publish_msg() {
  auto msg = std_msgs::msg::String();
  msg.data = "Halo dunia!";
  pub_message->publish(msg);
}

void Header::publish_uhuy() {
  auto uhuy_msg = example_infs::msg::Uhuy();
  uhuy_msg.uhuy = "UHUY";
  uhuy_msg.command = "PRINT";
  pub_uhuy->publish(uhuy_msg);
}

void Header::request_print(const std::string& input) {
  std::string new_print = input;

  if (new_print != old_print) {

    auto request = std::make_shared<example_infs::srv::Print::Request>();
    request->command = input; 

    cli_print->async_send_request(request, std::bind(&Header::callback_fut_print, this, _1));  // with a callback function
    old_print = input;
  } 

}

void Header::run_pub_msg(const std::string cmd) {
  rclcpp::Rate rate(2);

  RCLCPP_INFO(node_->get_logger(), "Publishing");
  pub_msg = true;

  // while loop control like ros1
  while(rclcpp::ok()) {
    param_input = cmd;
    RCLCPP_INFO(node_->get_logger(), "Count: %d", counter);
    if(!pub_msg) return;
    rate.sleep();
  }
}

// CALLBACKS //
void Header::cb_operate() {
  RCLCPP_INFO_ONCE(node_->get_logger(), "Message callback run!");
  if(pub_msg) {
    RCLCPP_INFO(node_->get_logger(), "%s command recieved", param_input.c_str());
    publish_msg();
    publish_uhuy();
    print_uhuy();
    request_print(param_input);
    if(counter > 5) {
      pub_msg = false;
      counter = 0;
    }
    counter++;
  }
}

void Header::callback_fut_print(const rclcpp::Client<example_infs::srv::Print>::SharedFuture future) {
  std::shared_ptr<example_infs::srv::Print::Response> result = future.get();
  RCLCPP_INFO(node_->get_logger(), "Service call responded with %s", result->success ? "true" : "false");
}

void Header::callback_msg_message(const std_msgs::msg::String::SharedPtr msg) {
  message_msg = msg->data;
}

void Header::callback_msg_uhuy(const example_infs::msg::Uhuy::SharedPtr msg) {
  uhuy_msg = msg->uhuy;
  uhuy_command = msg->command;
}

void Header::callback_srv_print(const example_infs::srv::Print::Request::SharedPtr request, 
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
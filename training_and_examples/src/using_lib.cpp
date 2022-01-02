#include "training_and_examples/Header.hpp"

class UsingLibCpp : public rclpp::Node {
  public:
    // CONSTRUCTOR ///
    UsingLibCpp() : Node("using_lib_cpp") {

      auto node_ptr = shared_from_this();
      std::make_shared<ClassB>(node_ptr);

      timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::timer_callback, this));

    }

  private:
    rclcpp::TimerBase::SharedPtr timer;

    void timer_callback() {
      
    }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Initiating AIO node");
  rclcpp::spin(std::make_shared<UsingLibCpp>());
  rclcpp::shutdown();
  return 0;
}
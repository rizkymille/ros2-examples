#include "rclcpp/rclcpp.hpp"
#include "training_and_examples/Header.hpp"

#include <future>

class UsingLibCpp : public rclcpp::Node {
  public:    

    // CONSTRUCTOR ///
    UsingLibCpp() : Node("using_lib_cpp") {

      RCLCPP_INFO(this->get_logger(), "Initiating header node");

      timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::timer_callback, this));

    }

  private:

    std::shared_ptr<Header> header;
    
    bool weak_expire_from_this = weak_from_this().expired();

    void init() {
      if (weak_expire_from_this) {
        RCLCPP_INFO(this->get_logger(), "Weak from this %s", weak_from_this().expired() ? "true" : "false");

        header = std::make_shared<Header>(shared_from_this());
        
        weak_expire_from_this = weak_from_this().expired();
      }
    }
    
    rclcpp::TimerBase::SharedPtr timer;

    void timer_callback() {

      init();
      
      header->publish_msg();
      header->publish_uhuy();
      header->print_uhuy();
    }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<UsingLibCpp>());
  rclcpp::shutdown();
  return 0;
}
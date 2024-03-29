#include "example_programs/header.hpp"

class UsingLibCpp : public rclcpp::Node { // , public Header // use this if regular class. use multiple inheritance
  public:    

    // CONSTRUCTOR ///
    UsingLibCpp() : Node("using_lib_cpp") { // ,Header // inheritance constructor. use this if regular class

      RCLCPP_INFO(this->get_logger(), "Initiating library using program");

      timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::init, this));

    }

  private:

    rclcpp::TimerBase::SharedPtr timer;

    std::shared_ptr<Header> header; // create empty library class pointer. define as smart pointer
    
    /* 
    get weak_ptr condition (bad/not) from this class.
    because declarators run before class constructor, then inherited object isn't there yet
    and this will create bad_weak_ptr error. We must wait until bad_weak_ptr is expired,
    which when the class object is constructed, then we're able to share it into other class
    */
    //bool weak_expire_from_this = weak_from_this().expired();

    void init() {
      /*if (weak_expire_from_this) {
        RCLCPP_INFO(this->get_logger(), "Object constructed! Calling library"); */

        /* 
        make class object as smart shared pointer, which shared from this class rclcpp::Node,
        and put into pointer variable
        */
        header = std::make_shared<Header>(shared_from_this()); 

        header->service_check();
        /*
        weak_expire_from_this = weak_from_this().expired(); 
      }*/
      timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::timer_callback, this));
    }

    int counter = 0;
    
    // Loop switch control by using 'timer ping-pong' system
    void timer_callback() {
      init();

      RCLCPP_INFO(this->get_logger(), "Timer callback run!");

      header->get_param();
      
      header->publish_msg();
      header->publish_uhuy();
      header->print_uhuy();
      header->request_print(header->param_input);
      if(counter > 5) {
        counter = 0;
        timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::uhuy_cb, this));
      }
      counter++;
    }

    void uhuy_cb() {
      RCLCPP_INFO(this->get_logger(), "Uhuy callback run!");
      header->publish_uhuy();
      header->print_uhuy();
      if(counter > 5) {
        counter = 0;
        timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::timer_callback, this));
      }
      counter++;
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<UsingLibCpp>());
  rclcpp::shutdown();
  return 0;
}
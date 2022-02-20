#include "example_programs/HeaderMultiexecutor.hpp"

class UsingLibCpp : public rclcpp::Node { // , public Header // use this if regular class. use multiple inheritance
  public:    

    // CONSTRUCTOR ///
    UsingLibCpp() : Node("using_lib_2_cpp") { // ,Header // inheritance constructor. use this if regular class

      RCLCPP_INFO(this->get_logger(), "Initiating library using program");

      // using callback group for multithreading executor management
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
    // bool weak_expire_from_this = weak_from_this().expired();

    void init() {
      RCLCPP_INFO(this->get_logger(), "Object constructed! Calling library");

      /* 
      make class object as smart shared pointer, which shared from this class rclcpp::Node,
      and put into pointer variable
      */
      header = std::make_shared<Header>(shared_from_this(), this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive)); 
      header->service_check();
      
      timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::timer_callback, this));
      // weak_expire_from_this = weak_from_this().expired(); 
    }
    
    void timer_callback() {

      RCLCPP_INFO(this->get_logger(), "Timer callback run!");

      /* 
      after nested loop in run_pub_msg break,
      program executes next function and execute
      run_pub_msg again, but in different command

      this simplify program from adding more if condition for each movement
      */
      header->run_pub_msg("PRINT");
      std::this_thread::sleep_for(1000ms);
      header->run_pub_msg("STOP");
      rclcpp::shutdown();
    }

};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::executors::MultiThreadedExecutor executor;
  auto node = std::make_shared<UsingLibCpp>();
  executor.add_node(node);
  executor.spin();
  rclcpp::shutdown();
  return 0;
}
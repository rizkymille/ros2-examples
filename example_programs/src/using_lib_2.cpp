#include "example_programs/Header.hpp"

class UsingLibCpp : public rclcpp::Node { // , public Header // use this if regular class. use multiple inheritance
  public:    

    // CONSTRUCTOR ///
    UsingLibCpp() : Node("using_lib_2_cpp") { // ,Header // inheritance constructor. use this if regular class

      RCLCPP_INFO(this->get_logger(), "Initiating library using program");

      // using callback group for multithreading executor management
      cb_grp_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant); // using reentrant type because each callback must be separated

      timer = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::init, this), cb_grp_);
      timer_second = this->create_wall_timer(500ms, std::bind(&UsingLibCpp::second_cb, this), cb_grp_);

    }

  private:

    rclcpp::CallbackGroup::SharedPtr cb_grp_;

    rclcpp::TimerBase::SharedPtr timer;
    rclcpp::TimerBase::SharedPtr timer_second;

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

    int counter = 0;

    // sequential loop system
    bool pub_msg = false;
    
    void timer_callback() {

      RCLCPP_INFO(this->get_logger(), "Timer callback run!");

      /* 
      after nested loop in run_pub_msg break,
      program executes next function and execute
      run_pub_msg again, but in different command

      this simplify program from adding more if condition for each movement
      */
      run_pub_msg("PRINT");
      std::this_thread::sleep_for(2000ms);
      run_pub_msg("STOP");
    }

    void run_pub_msg(const std::string cmd) {
      rclcpp::Rate rate(2);

      RCLCPP_INFO(this->get_logger(), "Publishing");
      pub_msg = true;

      // while loop control like ros1
      while(rclcpp::ok()) {
        header->param_input = cmd;
        RCLCPP_INFO(this->get_logger(), "Count: %d", counter);
        if(!pub_msg) return;
        rate.sleep();
      }
    }

    void second_cb() {
      RCLCPP_INFO_ONCE(this->get_logger(), "Message callback run!");
      if(pub_msg) {
        RCLCPP_INFO(this->get_logger(), "%s command recieved", header->param_input.c_str());
        header->publish_msg();
        header->publish_uhuy();
        header->print_uhuy();
        header->request_print(header->param_input);
        if(counter > 5) {
          pub_msg = false;
          counter = 0;
        }
        counter++;
      }
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::executors::MultiThreadedExecutor executor;
  auto node = std::make_shared<UsingLibCpp>();
  executor.add_node(node);
  executor.spin();
  rclcpp::shutdown();
  return 0;
}
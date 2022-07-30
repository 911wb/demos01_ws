#include "ros/ros.h"
#include "head/hello.h"

namespace hello_ns
{
    void Myhello::run()
    {
        ROS_INFO("run 函数执行.....");
    }

}


int main(int argc, char * argv[])
{
    setlocale(LC_ALL,"");
    ros::init(argc, argv, "hello_head");
    hello_ns::Myhello Myhello;
    Myhello.run();


    return 0;
}
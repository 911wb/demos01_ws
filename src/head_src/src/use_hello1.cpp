
#include "ros/ros.h"
#include "head_src/hello1.h"
#include<iostream>


int main(int argc, char * argv[])
{
    setlocale(LC_ALL,"");
    ros::init(argc, argv, "hello_head_src, hello git branch");
    hello_ns::Myhello Myhello;
    Myhello.run();


    return 0;
}

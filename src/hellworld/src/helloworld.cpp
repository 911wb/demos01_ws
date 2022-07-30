/*

1.包含ros的头文件
2.编写main函数
3.初始化ros节点
4.输出日志


*/


#include "ros/ros.h"
#include <iostream>





int main(int argc,char *argv[])
{

	// 3.初始化ros节点
	ros::init(argc,argv,"hello_node");// 节点名称


	// 4.输出日志
	ROS_INFO("hello ROS hello git");


	return 0;



}

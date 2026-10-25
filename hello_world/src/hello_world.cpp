/*
  目标:
    快速体验ROS2功能包开发
    要求:按照步骤进行工作空间建立,功能包的建立与编译.运行功能包并输出结果
*/


#include <iostream>
#include <rclcpp/rclcpp.hpp>

int main(int argc,char** argv)
{
  //初始化ROS2
  rclcpp::init(argc,argv);
  //创建ROS2节点
  /*
  不允许数字开头
  不允许使用连字符-
  不允许有空格
  不允许出现/
  不允许使用.
  不允许为空


  特殊含义:
    允许多个_开头,但是ROS2会将其视为一个隐藏节点,使用ros2 node list 无法显示 ,必须使用ros2 node list --all才会显示

  */
  auto node_ptr = rclcpp::Node::make_shared("hello_world");

  RCLCPP_INFO(node_ptr->get_logger(),"hello world!");

  // rclcpp::spin(node_ptr);
  //释放资源
  rclcpp::shutdown();

  return 0;

}
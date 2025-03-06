#include <ros/ros.h>
#include <std_msgs/String.h>
#include <nav_msgs/Odometry.h>
#include <state_msg/form.h>
#include <geometry_msgs/PoseStamped.h>


// 全局变量，用于存储两个话题的最新消息
std_msgs::String last_odometry_msg;
std_msgs::String last_form_msg;
std_msgs::String last_command_msg;

void odometry_cb(const nav_msgs::Odometry::ConstPtr& msg) {
    std::stringstream ss;
    ss << msg->pose.pose.position.x << "," << msg->pose.pose.position.y << "," << msg->pose.pose.position.z << ","
       << msg->twist.twist.linear.x << "," << msg->twist.twist.linear.y << "," << msg->twist.twist.linear.z ;
    last_odometry_msg.data = ss.str();
}

void form_cb(const state_msg::form::ConstPtr& msg) {
    std::stringstream ss;
    ss <<static_cast<int>( msg->swarm_shape) << "," << msg->swarm_size ;
    last_form_msg.data = ss.str();  
}

void Command_cb(const geometry_msgs::PoseStamped::ConstPtr& msg) {
    std::stringstream ss;
    ss << last_odometry_msg.data << "," << last_form_msg.data << "," 
       << msg->pose.position.x << "," << msg->pose.position.y << "," << msg->pose.position.z << "," 
       << msg->pose.orientation.x << "," << msg->pose.orientation.y << "," << msg->pose.orientation.z << "," << msg->pose.orientation.w << std::endl;
    std_msgs::String combined_msg;
    combined_msg.data = ss.str();
    // 发布合并后的消息
    ros::Publisher pub = ros::NodeHandle().advertise<std_msgs::String>("nlink_linktrack_data_transmission", 10);
    pub.publish(combined_msg);
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "sub_pub_pro");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::String>("nlink_linktrack_data_transmission", 10);

    ros::Subscriber sub_odometry = nh.subscribe("uav2/drone_state", 10, odometry_cb);
    ros::Subscriber sub_form = nh.subscribe("set_formation", 10, form_cb);
    ros::Subscriber Command_sub = nh.subscribe<geometry_msgs::PoseStamped>("command_pub", 10, Command_cb);

    ros::spin(); 

    return 0;
}
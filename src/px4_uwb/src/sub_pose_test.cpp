#include "ros/ros.h"
#include "std_msgs/ByteMultiArray.h"
#include "nlink_parser/LinktrackNodeframe0.h"
#include "geometry_msgs/PoseStamped.h"
#include <sstream>
#include <vector>
#include <string>

ros::Publisher pub;


// 将字符串分割并存储到 double 数组中
std::vector<double> parseDoublesFromString(const std::string& str) {
    std::vector<double> doubles;
    std::istringstream iss(str);
    std::string token;

    while (std::getline(iss, token, ',')) {
        try {
            doubles.push_back(std::stod(token)); // 将字符串转换为 double 并添加到数组中
        } catch (const std::invalid_argument& e) {
            // 如果转换失败，可以处理错误，这里我们选择忽略无法转换的值
            ROS_WARN("Invalid number: %s", token.c_str());
        }
    }
    return doubles;
}

// 回调函数
void linktrackNodeframe0Callback(const nlink_parser::LinktrackNodeframe0::ConstPtr& msg)
{
    for (const auto& node : msg->nodes) {
        // 将字节数组转换为字符串
        std::string data_str(node.data.begin(), node.data.end());

        // 解析字符串
        std::vector<double> values = parseDoublesFromString(data_str);

        // 检查是否有足够的值来填充 PoseStamped
        if (values.size() >= 7) {
            // 创建 PoseStamped 消息
            geometry_msgs::PoseStamped pose_msg;
            pose_msg.header.stamp = ros::Time::now(); // 设置当前时间
            pose_msg.header.frame_id = "world"; // 设置参考帧

            // 假设 values 数组包含 [x, y, z, qx, qy, qz, qw]
            pose_msg.pose.position.x = values[0];
            pose_msg.pose.position.y = values[1];
            pose_msg.pose.position.z = values[2];
            pose_msg.pose.orientation.x = values[3];
            pose_msg.pose.orientation.y = values[4];
            pose_msg.pose.orientation.z = values[5];
            pose_msg.pose.orientation.w = values[6];
            
            // 发布 PoseStamped 消息
            pub.publish(pose_msg);
        }
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "linktrack_nodeframe0_subscriber");
    ros::NodeHandle nh;

    // 创建发布者
    pub = nh.advertise<geometry_msgs::PoseStamped>("uav1/mavros/local_position/pose", 10);

    // 订阅自定义消息话题
    ros::Subscriber sub = nh.subscribe("nlink_linktrack_nodeframe0", 1000, linktrackNodeframe0Callback);

    while (ros::ok())
    {
        ros::spinOnce();
    }
    return 0;
}
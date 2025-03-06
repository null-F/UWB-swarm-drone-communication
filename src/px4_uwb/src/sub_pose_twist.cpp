#include "ros/ros.h"
#include "nav_msgs/Odometry.h"
#include "state_msg/form.h"
#include "nlink_parser/LinktrackNodeframe0.h"
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <geometry_msgs/PoseStamped.h>

// ç”¨äºŽå­˜å‚¨å‘å¸ƒè€…çš„æ˜ å°„
std::map<int, ros::Publisher> publishers_odometry;
ros::Publisher pub_form; 
ros::Publisher pub_command; 

// å°†å­—ç¬¦ä¸²åˆ†å‰²å¹¶å­˜å‚¨åˆ° double æ•°ç»„ä¸­
std::vector<double> parseDoublesFromString(const std::string& str) {
    std::vector<double> doubles;
    std::istringstream iss(str);
    std::string token;

    while (std::getline(iss, token, ',')) {
        try {
            doubles.push_back(std::stod(token)); // å°†å­—ç¬¦ä¸²è½¬æ¢ä¸º double å¹¶æ·»åŠ åˆ°æ•°ç»„ä¸­
        } catch (const std::invalid_argument& e) {
            // å¦‚æžœè½¬æ¢å¤±è´¥ï¼Œå¯ä»¥å¤„ç†é”™è¯¯ï¼Œè¿™é‡Œæˆ‘ä»¬é€‰æ‹©å¿½ç•¥æ— æ³•è½¬æ¢çš„å€¼
            ROS_WARN("Invalid number: %s", token.c_str());
        }
    }
    return doubles;
}

void linktrackNodeframe0Callback(const nlink_parser::LinktrackNodeframe0::ConstPtr& msg) {
    for (const auto& node : msg->nodes) {
        std::string data_str(node.data.begin(), node.data.end());
        std::vector<double> values = parseDoublesFromString(data_str);

        if (values.size() >= 15) {
            nav_msgs::Odometry odometry_msg;
            state_msg::form form_msg;
            geometry_msgs::PoseStamped command_msg;

            odometry_msg.pose.pose.position.x = values[0];
            odometry_msg.pose.pose.position.y = values[1];
            odometry_msg.pose.pose.position.z = values[2];
            odometry_msg.twist.twist.linear.x = values[3];
            odometry_msg.twist.twist.linear.y = values[4];
            odometry_msg.twist.twist.linear.z = values[5];
            form_msg.swarm_shape = static_cast<int>(values[6]);
            form_msg.swarm_size = static_cast<float>(values[7]);
            command_msg.pose.position.x = values[8];
            command_msg.pose.position.y = values[9];
            command_msg.pose.position.z = values[10];
            command_msg.pose.orientation.x = values[11];
            command_msg.pose.orientation.y = values[12];
            command_msg.pose.orientation.z = values[13];
            command_msg.pose.orientation.w = values[14];

            // èŽ·å–å¯¹åº” ID çš„å‘å¸ƒè€…ï¼Œå¦‚æžœä¸å­˜åœ¨åˆ™åˆ›å»º
            if (publishers_odometry.find(node.id) == publishers_odometry.end()) {
                std::string odom_topic_name = "uav" + std::to_string(node.id) + "/drone_state";
                publishers_odometry[node.id] = ros::NodeHandle().advertise<nav_msgs::Odometry>(odom_topic_name, 10);
            }
            publishers_odometry[node.id].publish(odometry_msg);

            pub_form.publish(form_msg);
            pub_command.publish(command_msg);
        } else {
            ROS_WARN("Insufficient data in the message. Expected at least 8 values, but got %zu", values.size());
        }
    }
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "sub_pose_twist");
    ros::NodeHandle nh;

    pub_form = nh.advertise<state_msg::form>("set_formation", 10);
    pub_command = nh.advertise<geometry_msgs::PoseStamped>("command_pub", 10);

    ros::Subscriber sub = nh.subscribe("nlink_linktrack_nodeframe0", 1000, linktrackNodeframe0Callback);

    ros::spin(); 

    return 0;
}



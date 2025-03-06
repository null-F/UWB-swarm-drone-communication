#include <ros/ros.h>
#include <px4_uwb/Bspline.h>
#include <nlink_parser/LinktrackNodeframe0.h>
#include <sstream>
#include <vector>
#include <string>

ros::Publisher pub;
px4_uwb::Bspline current_bspline;  // 存储当前正在组装的Bspline消息

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

// 根据标识符处理接收到的数据
void processPacket(const std::string& data, int packet_type) {
    std::vector<double> values = parseDoublesFromString(data);
    switch (packet_type) {
        case 1: // Header
            if (values.size() >= 5) {
                current_bspline.drone_id = static_cast<int>(values[0]);
                current_bspline.order = static_cast<int>(values[1]);
                current_bspline.traj_id = static_cast<int64_t>(values[2]);
                current_bspline.start_time.sec = static_cast<int>(values[3]);
                current_bspline.start_time.nsec = static_cast<int>(values[4]);
            }
            break;
        case 2: // Knots
            current_bspline.knots = values;
            break;
        case 3: // Pos_pts
            for (size_t i = 0; i < values.size(); i += 3) {
                geometry_msgs::Point point;
                point.x = values[i];
                point.y = values[i + 1];
                point.z = values[i + 2];
                current_bspline.pos_pts.push_back(point);
            }
            break;
        default:
            ROS_ERROR("Unknown packet type: %d", packet_type);
            break;
    }
}

// 回调函数，接收并处理消息
void linktrackNodeframe0Callback(const nlink_parser::LinktrackNodeframe0::ConstPtr& msg) {
    for (const auto& node : msg->nodes) {
        std::string data_str(node.data.begin(), node.data.end());
        int packet_type = std::stoi(data_str.substr(0, data_str.find(',')));
        std::string payload = data_str.substr(data_str.find(',') + 1);
        processPacket(payload, packet_type);

        // 检查是否已经接收到所有数据包
        if (current_bspline.drone_id != 0 && !current_bspline.knots.empty() && !current_bspline.pos_pts.empty()) {
            pub.publish(current_bspline);  // 发布完整的Bspline消息
            current_bspline = px4_uwb::Bspline();  // 重置当前消息，准备接收下一组数据
        }
    }
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "bspline_subscriber");
    ros::NodeHandle nh;

    // 订阅nlink_linktrack_nodeframe0话题
    ros::Subscriber sub = nh.subscribe("nlink_linktrack_nodeframe0", 10, linktrackNodeframe0Callback);
    pub = nh.advertise<px4_uwb::Bspline>("broadcast_bspline", 10);  // 确保消息类型匹配

    ros::spin();
    return 0;
}
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <px4_uwb/Bspline.h>
#include <sstream>
#include <vector>

ros::Publisher pub;
std_msgs::String last_header_msg;  // 保存最后一条Header消息
std_msgs::String last_knots_msg;  // 保存最后一条Knots消息
std_msgs::String last_pos_pts_msg;  // 保存最后一条Pos_pts消息

void traj_cb(const px4_uwb::Bspline::Ptr& msg) {
    // 第一部分：Header信息
    std::stringstream ss_header;
    ss_header << 1 << "," << msg->drone_id << "," << msg->order << "," << msg->traj_id << ","
              << msg->start_time.sec << "," << msg->start_time.nsec;
    last_header_msg.data = ss_header.str();

    // 第二部分：Knots数据
    std::stringstream ss_knots;
    ss_knots << std::fixed << std::setprecision(3);
    ss_knots << 2 << ",";
    for (size_t i = 0; i < msg->knots.size(); ++i) {
        ss_knots << msg->knots[i];
        if (i < msg->knots.size() - 1) ss_knots << ",";
    }
    last_knots_msg.data = ss_knots.str();

    // 第三部分：Pos_pts数据
    std::stringstream ss_pos_pts;
    ss_pos_pts << std::fixed << std::setprecision(3);
    ss_pos_pts << 3 << ",";
    for (size_t i = 0; i < msg->pos_pts.size(); ++i) {
        ss_pos_pts << msg->pos_pts[i].x << "," << msg->pos_pts[i].y << "," << msg->pos_pts[i].z;
        if (i < msg->pos_pts.size() - 1) ss_pos_pts << ",";
    }
    last_pos_pts_msg.data = ss_pos_pts.str();

}

void publishLoop() {
    // 发布最后一条Header消息
    if (!last_header_msg.data.empty()) {
        pub.publish(last_header_msg);
        ros::Duration(0.01).sleep();  // 等待一点时间确保消息顺序
    }
    // 发布最后一条Knots消息
    if (!last_knots_msg.data.empty()) {
        pub.publish(last_knots_msg);
        ros::Duration(0.01).sleep();  // 等待一点时间确保消息顺序
    }
    // 发布最后一条Pos_pts消息
    if (!last_pos_pts_msg.data.empty()) {
        pub.publish(last_pos_pts_msg);
    }
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "sub_pub_traj");
    ros::NodeHandle nh;

    // 订阅broadcast_bspline话题
    ros::Subscriber sub = nh.subscribe("broadcast_bspline", 10, traj_cb);

    // 发布到nlink_linktrack_data_transmission话题
    pub = nh.advertise<std_msgs::String>("nlink_linktrack_data_transmission", 10);

    // ros::Rate loop_rate(1);  // 设置循环频率为1Hz

    // while (ros::ok()) {
    //     publishLoop();  // 循环发布消息
    //     ros::spinOnce();  // 处理回调函数
    //     loop_rate.sleep();  // 保持循环频率
    // }

    ros::spin();

    return 0;
}
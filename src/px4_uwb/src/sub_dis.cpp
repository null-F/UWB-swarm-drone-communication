#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h" 
#include "nlink_parser/LinktrackAnchorframe0.h"
#include "std_msgs/Int32.h"
#include "nlink_parser/LinktrackTagframe0.h"
#include "nlink_parser/LinktrackNodeframe2.h"
#include "nlink_parser/LinktrackNode2.h"
#include <tf/transform_datatypes.h>
#include <sensor_msgs/Imu.h>
#include <geometry_msgs/PoseStamped.h>


float dis_val;    



void cb_uwb(const nlink_parser::LinktrackNodeframe2::ConstPtr& msg)
{
    nlink_parser::LinktrackNodeframe2 uwb_data;
    uwb_data = *msg;
    for (size_t i = 0; i < msg->nodes.size(); ++i) 
    {
        const nlink_parser::LinktrackNode2& node = msg->nodes[i];
        dis_val = node.dis;
        //将dis_val发布到参数服务器上
        ros::param::set("dis_val",dis_val);
        ROS_INFO("With node[%d] distance : %f \r\n",msg->id,dis_val);
    }

}



int main(int argc, char **argv)
{
    ros::init(argc, argv, "uwb");
    ros::NodeHandle nh;

    ros::Subscriber uwb_sub = nh.subscribe("nlink_linktrack_nodeframe2", 10, cb_uwb);

    ros::spin();

    return 0;
}
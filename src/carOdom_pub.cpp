
#include "neu_robotdrive/carOdom_pub.h"
int main(int argc, char **argv)
{
  //Initiate ROS
  ros::init(argc, argv, "carOdom_pub");

  //Create an object of class carOdom_pub that will take care of everything
  carOdom_pub carOdom;

  ros::spin();

  return 0;
}

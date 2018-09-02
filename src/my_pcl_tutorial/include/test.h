//
// Created by wunl on 18-9-2.
//

#ifndef MY_PCL_TUTORIAL_TEST_H
#define MY_PCL_TUTORIAL_TEST_H

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/PointCloud2.h>
#include <tf/transform_datatypes.h>
#include <tf/transform_broadcaster.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/filters/voxel_grid.h>

class test
{
public:
    test();
    virtual ~test ();

private:
    pcl::PointCloud<pcl::PointXYZI>::Ptr _laserCloudCornerLast;   ///< last corner points cloud
};


#endif //MY_PCL_TUTORIAL_TEST_H

#include "process.h"
#include <iostream>
//#include <Eigen/Dense>
#include "C:/eigen/Eigen/Dense"
void Process::planProcess()
{
    Eigen::Vector3d tmp(0.0, 0.0, 0.0);
    std::cout << tmp.transpose() << std::endl;

    std::cout << "planProcess begin" << std::endl;
    my_map.mapInfo();
    std::cout << "planProcess end" << std::endl;
}
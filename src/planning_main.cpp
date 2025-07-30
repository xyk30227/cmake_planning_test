#include<iostream>
#include "process.h"
#include "show_result.h"
//#include <Eigen/Dense>
int main()
{
    std::cout << "main begin"<<std::endl;
    Process my_process;
    my_process.planProcess();
    std::cout << "main end"<<std::endl;

    ShowResult my_show;
    my_show.drawResult();
}
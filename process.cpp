#include "process.h"
#include <iostream>
void Process::planProcess()
{
    std::cout << "planProcess begin" << std::endl;
    my_map.mapInfo();
    std::cout << "planProcess end" << std::endl;
}
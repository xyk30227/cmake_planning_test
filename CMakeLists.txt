cmake_minimum_required(VERSION 3.20.0)
project(planning
    VERSION 1.0.0
    DESCRIPTION "Demo Cmake"    
)

set(CMAKE_CXX_STANDARD 17)


#变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${PROJECT_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${PROJECT_SOURCE_DIR}/src/pnc_map)
#添加子目录 找子目录的CMakeLists
add_subdirectory(src)

cmake_minimum_required(VERSION 3.20.0)
project(planning
    VERSION 1.0.0
    DESCRIPTION "Demo Cmake"    
)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

#变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${PROJECT_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${PROJECT_SOURCE_DIR}/src/pnc_map)
set(Show_Result_Dir ${PROJECT_SOURCE_DIR}/src/show_result)



#添加三方库
set(EIGEN3_INCLUDE_DIR "C:/eigen")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

find_package(Eigen3 3.4 REQUIRED)
if(TARGET Eigen3::Eigen)
    message(STATUS "*****Eigen3 3.4 Found in ${CMAKE_MODULE_PATH}****")
endif()

#添加子目录 找子目录的CMakeLists
add_subdirectory(src)
add_subdirectory(test/map_test)
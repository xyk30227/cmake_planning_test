cmake_minimum_required(VERSION 3.20.0)
project(planning)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) #动态库和exe都指定到bin目录下面
#CMAKE_LIBRARY_OUTPUT_DIRECTORY linux
#CMAKE_ARCHIVE_OUTPUT_DIRECTORY 静态库

#动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
add_library(common
SHARED
${SRC_LISTS}
)
#动态库链接头文件
target_include_directories(common
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#可执行文件
add_executable(planning_main planning_main.cpp)
#可执行文件链接头文件
target_include_directories(planning_main
PUBLIC
${PROJECT_SOURCE_DIR}/include
)
#可执行文件链接动态库
target_link_libraries(planning_main
PUBLIC
common
)
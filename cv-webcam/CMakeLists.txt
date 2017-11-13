cmake_minimum_required(VERSION 2.8)
project(c920)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(c920 c920.cpp)
target_link_libraries(c920 ${OpenCV_LIBS})


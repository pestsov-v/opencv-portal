cmake_minimum_required(VERSION 3.10)
project(opencv)

set(CMAKE_CXX_STANDARD 14)

set(OpenCV_DIR /opt/homebrew/opt/opencv/include/opencv4)

find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

message(STATUS "OpenCV_INCLUDE_DIRS: ${OpenCV_INCLUDE_DIRS}")
message(STATUS "OpenCV_LIBS: ${OpenCV_LIBS}")

add_executable(opencv main.cpp)
target_link_libraries(opencv ${OpenCV_LIBS})

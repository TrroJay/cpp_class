cmake_minimum_required(VERSION 3.26)
project(cpp_class_w6_off)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_class_w6_2 src/MyQueue.cpp
        src/MyStack.cpp)

include_directories(include)

cmake_minimum_required(VERSION 3.26)
project(cpp_class_w8_in)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(cpp_class_w8_1 src/main1.cpp
)
add_executable(cpp_class_w8_2
        src/main2.cpp
)
add_executable(cpp_class_w8_1_2 src/main1_2.cpp
)
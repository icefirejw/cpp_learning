cmake_minimum_required(VERSION 3.13)
project(basic_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(basic_cpp main.cpp basic_cpp.h)
add_executable(cpp_introduction cpp_introduction.cpp basic_cpp.h)
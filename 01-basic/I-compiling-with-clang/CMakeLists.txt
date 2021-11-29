cmake_minimum_required(VERSION 3.5)

project(hello_cmake)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

add_executable(hello_cmake main.cpp)

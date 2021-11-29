cmake_minimum_required(VERSION 3.5)

#cmake .. -G Ninja
#cmake .. -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
#ninja -v

project(test)

SET(CMAKE_C_COMPILER )

add_executable(test main.cpp)

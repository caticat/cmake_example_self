cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEX2" CACHE STRING "Set C++ Compiler Flags" FORCE)

project(compile_flags)

add_executable(compile_flags main.cpp)

target_compile_definitions(compile_flags
        PRIVATE
        EX3
        )

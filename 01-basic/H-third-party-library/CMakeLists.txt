cmake_minimum_required(VERSION 3.5)

project(third_party_include)

# find_package,需要使用到module:cmake-3.16.5-Linux-x86_64/share/cmake-3.16/Modules/FindOpenSSL.cmake
find_package(OpenSSL REQUIRED COMPONENTS Crypto)

if (OpenSSL_FOUND)
    message(STATUS "OpenSSL found")
else()
    message(FATAL_ERROR "OpenSSL not found")
endif()

#get_cmake_property(vecVar VARIABLES)
#foreach(var ${vecVar})
#    message(STATUS "${var} = ${${var}}")
#endforeach()

add_executable(${PROJECT_NAME}
        main.cpp
        )

target_link_libraries(${PROJECT_NAME}
        PRIVATE OpenSSL::Crypto
        )

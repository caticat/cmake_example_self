cmake_minimum_required(VERSION 3.5)

project(cmake-examples-install)

# lib
add_library(hello-library
        SHARED
        src/hello.cpp
        )

target_include_directories(hello-library
        PUBLIC
        ${CMAKE_SOURCE_DIR}/include
        )

# bin
add_executable(hello-binary
        src/main.cpp
        )

target_link_libraries(hello-binary
        PRIVATE
        hello-library
        )

# install
if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    message(STATUS "Setting default CMAKE_INSTALL_PREFIX path to ${CMAKE_BINARY_DIR}/install")
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE STRING "The path to use for make install" FORCE)
endif()

# bin
install(TARGETS hello-binary
        DESTINATION bin
        )

# lib
install(TARGETS hello-library
        LIBRARY DESTINATION lib)

# header
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
        DESTINATION include)

# conf
install(FILES cmake-examples.conf
        DESTINATION etc)

# LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib ./hello-binary

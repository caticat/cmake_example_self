cmake_minimum_required(VERSION 3.5)

# lib
add_library(hello_library
        STATIC
        src/hello.cpp
)

# 这里的include使用了public,下面的hello_binary的include就不用再写一遍了,所有使用这个库的都会包含这个inlude目录
target_include_directories(hello_library
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# exe
add_executable(hello_binary
        src/main.cpp
)

target_link_libraries(hello_binary
        PRIVATE
        hello_library
        )

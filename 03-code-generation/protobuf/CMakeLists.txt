cmake_minimum_required(VERSION 3.5)

project(pb)

find_package(Protobuf REQUIRED)

if (PROTOBUF_FOUND)
    message("protobuf found")
else()
    message(FATAL_ERROR "Cannot find Protobuf")
endif ()

#PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS test.proto test1.proto)
file(GLOB LISPROTO "*.proto")
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ${LISPROTO})

message("PROTO_SRCS = ${PROTO_SRCS}")
message("PROTO_HDRS = ${PROTO_HDRS}")

add_executable(${PROJECT_NAME}
        main.cpp
        ${PROTO_SRCS}
        ${PROTO_HDRS}
        )

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PROTOBUF_INCLUDE_DIRS}
        ${CMAKE_CURRENT_BINARY_DIR}
        )

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        ${PROTOBUF_LIBRARIES}
        )

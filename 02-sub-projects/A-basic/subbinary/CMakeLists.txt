project(subbin)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
        PRIVATE sub::lib1
        PRIVATE sub::lib2)

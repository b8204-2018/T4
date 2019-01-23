cmake_minimum_required(VERSION 3.12.3)
project(T4+)


enable_testing()


set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)

include_directories(src)
include_directories(googletest/googletest/include)


set(SOURCE_FILES src/queue2linklist.cpp src/queue2linklist.h)

add_executable(main main.cpp ${SOURCE_FILES})
add_executable(tests tests.cpp ${SOURCE_FILES})

target_link_libraries(main gtest)
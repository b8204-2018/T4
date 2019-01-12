cmake_minimum_required(VERSION 3.13)
project(T4)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/googletest)

include_directories(libs/googletest/googletest/include)

include_directories(src)

add_executable(T4
        README.md main.cpp src/deque.h src/deque.cpp)

add_executable(Tests
        README.md tests.cpp src/deque.h src/deque.cpp)

target_link_libraries(Tests gtest gtest_main)

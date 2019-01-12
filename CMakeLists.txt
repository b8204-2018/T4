cmake_minimum_required(VERSION 3.12)
project(T4)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)

include_directories(src)

add_executable(T4 main.cpp src/t_4.cpp src/t_4.h)

add_executable(Tests
             tests.cpp src/t_4.h src/t_4.cpp)

target_link_libraries(Tests gtest gtest_main)
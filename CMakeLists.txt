cmake_minimum_required(VERSION 3.13)
project(Lfin)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(libs/googletest)

include_directories(libs/googletest/googletest/include)

include_directories(libs)

add_executable(Lfin main.cpp libs/cycle_vector_library.cpp libs/cycle_vector_library.h)

add_executable(tests tests.cpp libs/cycle_vector_library.h libs/cycle_vector_library.cpp)

target_link_libraries(tests gtest gtest_main)
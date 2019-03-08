cmake_minimum_required(VERSION 3.12.3)
project(T4+)


enable_testing()


set(CMAKE_CXX_STANDARD 17)
set(LINKER_FLAGS2-ISDL2main)
set(LINKER_FLAGS2-ISDL2)

add_subdirectory(googletest)

include_directories(src)
include_directories(googletest/googletest/include)

add_executable(Tests tests.cpp src/queue2linklist.cpp src/queue2linklist.h)
add_executable(main main.cpp src/queue2linklist.cpp src/queue2linklist.h)
target_link_libraries(Tests gtest gtest_main)
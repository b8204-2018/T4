cmake_minimum_required(VERSION 3.13)
project(Lfin)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lfin main.cpp T4_lib/t4_operations.cpp T4_lib/t4_operations.h)
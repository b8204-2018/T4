cmake_minimum_required(VERSION 3.13)
project(Lfin)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lfin main.cpp libs/cycle_vector_library.cpp libs/cycle_vector_library.h)
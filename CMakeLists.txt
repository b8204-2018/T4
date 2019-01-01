cmake_minimum_required(VERSION 3.12)
project(T4)

set(CMAKE_CXX_STANDARD 14)

add_executable(T4 test-main.cpp circleDeck.cpp circleDeck.h tests.cpp catch.hpp)
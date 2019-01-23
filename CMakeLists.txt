cmake_minimum_required(VERSION 3.12.3)
project(Lfin)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)

include_directories(lib)

add_executable(Lfin main.cpp lib/cycle_vector_ocheredi_library.h lib/cycle_vector_ocheredi_library.h)

add_executable(tests tests.cpp lib/cycle_vector_ocheredi_library.h lib/cycle_vector_ocheredi_library.h)

target_link_libraries(tests gtest gtest_main)
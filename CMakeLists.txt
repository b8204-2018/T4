cmake_minimum_required(VERSION 3.12)
project(T4)

enable_testing()

set(LINKER_FLAGS1 -lcygwin)
set(LINKER_FLAGS2 -lSDL2main)
set(LINKER_FLAGS3 -lSDL2)
set(LINKER_FLAGS4 -mwindows)

add_subdirectory(googletest)

include_directories(src) # необходимо для того, чтобы писать в директиве просто lib.h
include_directories(googletest/googletest/include)

set(SOURCE_FILES src/t_4.cpp src/t_4.h)

add_executable(T4 main.cpp ${SOURCE_FILES})

add_executable(tests Tests.cpp ${SOURCE_FILES})

target_link_libraries(tests gtest)
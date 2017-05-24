cmake_minimum_required(VERSION 3.6)
project(veselo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp add.cpp head1.h)
add_executable(veselo ${SOURCE_FILES})
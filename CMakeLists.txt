cmake_minimum_required(VERSION 3.16)
project(Myproject LANGUAGES CXX)
#
add_library(Library STATIC lib_file.cpp)
add_executable(Myproject main.cpp )
add_subdirectory(Adder)
target_include_directories(Myproject PUBLIC Adder)
target_link_libraries(Myproject PUBLIC Library)
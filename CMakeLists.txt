cmake_minimum_required(VERSION 3.16)
project(Myproject LANGUAGES CXX)
#set(CMAKE_CXX_STANDARD 17)
add_library(Library STATIC lib_file.cpp)
# Use GLOB_RECURSE to gather all .cpp files in src/ and subdirectories
#file(GLOB_RECURSE SOURCES "*.cpp")
# Include the header files from the include directory
#include_directories(include)

# Create an executable target
#add_executable(my_executable ${SRC_FILES})

# Link the executable with the my_library
#target_link_libraries(my_executable PRIVATE my_library
add_executable(Myproject main.cpp )
add_subdirectory(Adder)
target_include_directories(Myproject PUBLIC Adder)
target_link_libraries(Myproject PUBLIC Library)
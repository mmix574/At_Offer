cmake_minimum_required(VERSION 3.5)
project(At_Offer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("Model")
#include_directories("Math")

set(SOURCE_FILES 041.cpp)
add_executable(At_Offer ${SOURCE_FILES})
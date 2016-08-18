cmake_minimum_required(VERSION 3.5)
project(At_Offer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("Model")
set(SOURCE_FILES 027.cpp)
add_executable(At_Offer ${SOURCE_FILES})
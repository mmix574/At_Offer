cmake_minimum_required(VERSION 3.5)
project(At_Offer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("Model")
set(SOURCE_FILES 026.cpp Model/TreeNode.h)
add_executable(At_Offer ${SOURCE_FILES})
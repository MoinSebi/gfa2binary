cmake_minimum_required(VERSION 3.14)
project(gfa2binary)

set(CMAKE_CXX_STANDARD 14)

add_executable(gfa2binary main.cpp path.cpp path.h node.cpp node.h graph.cpp graph.h)
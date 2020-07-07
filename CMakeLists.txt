cmake_minimum_required(VERSION 3.14)
project(gfa2binary)

set(CMAKE_CXX_STANDARD 14)

add_executable(gfa2binary src/main.cpp src/path.cpp src/path.h src/node.cpp src/node.h src/graph.cpp src/graph.h)
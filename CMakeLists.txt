cmake_minimum_required(VERSION 3.10)
project(EdgeLauncher)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(EdgeLauncher main.cpp)
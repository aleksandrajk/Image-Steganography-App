cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp image.cpp image.h stb_image.h stb_image_write.h)

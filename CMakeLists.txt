cmake_minimum_required(VERSION 3.21)
project(app)

set(CMAKE_CXX_STANDARD 17)

add_executable(app main.cpp image.cpp image.h stb_image.h stb_image_write.h)

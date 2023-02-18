cmake_minimum_required(VERSION 3.10)

project(KGPL VERSION 0.1.1)

find_package(OpenGL REQUIRED)

add_library(KGPL kgpl_window.cpp)

add_executable(KGPL example)

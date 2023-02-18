cmake_minimum_required(VERSION 3.10)

project(KGPL VERSION 0.1.1)

find_package(OpenGL REQUIRED)

add_executable(example)

#only for windows
target_link_libraries(KGPL -lgdi32)

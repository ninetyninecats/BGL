cmake_minimum_required(VERSION 4.2)

project(
    BGL
    VERSION 0.1
    DESCRIPTION "A library for making desktop applications"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY 
    "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(
  CMAKE_LIBRARY_OUTPUT_DIRECTORY
  "${CMAKE_BINARY_DIR}/$<CONFIGURATION>"
)
add_executable(BGL
main.cpp
)

find_package(SDL REQUIRED)
target_link_libraries(BGL
  SDL3 
)
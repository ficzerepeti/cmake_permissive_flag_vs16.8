CMAKE_MINIMUM_REQUIRED(VERSION 3.18)

project(perm_test)

SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_EXTENSIONS OFF)

add_executable(test test.cpp)
target_compile_options(test PUBLIC "/permissive")

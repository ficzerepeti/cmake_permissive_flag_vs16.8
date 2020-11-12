CMAKE_MINIMUM_REQUIRED(VERSION 3.18)

project(perm_test)

# With VS 16.8 C++20 is translated into /std:c++latest which implies /permissive-
SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_EXTENSIONS OFF)

add_executable(test test.cpp)

# I expected this to override implied /permissive- and enable old MSVC bugs/features
# Instead this does not appear when invoking cl.exe
target_compile_options(test PUBLIC "/permissive")

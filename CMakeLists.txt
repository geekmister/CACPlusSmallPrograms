cmake_minimum_required(VERSION 3.26)
project(c-sample)

set(CMAKE_CXX_STANDARD 98)

add_executable(c-sample main.cpp
        main.cpp
        samples/sum.cpp
        samples/max.cpp
)

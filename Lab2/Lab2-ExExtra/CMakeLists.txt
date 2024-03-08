cmake_minimum_required(VERSION 3.27)
project(Movie)

set(CMAKE_CXX_STANDARD 17)

add_executable(Movie main.cpp
        movie.h
        Gloobal.h
        movie.cpp
        Gloobal.cpp)

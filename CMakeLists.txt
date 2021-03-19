cmake_minimum_required(VERSION 3.17)
project(Builder_Pattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(Builder_Pattern main.cpp Builder/Computer.cpp)
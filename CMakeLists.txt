cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(pp6calculator)

include_directories(PP6Lib)

add_executable(pp6calculator pp6calculator.cpp PP6Lib/PP6Math.cpp PP6Lib/PP6Math.hpp)

cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(pp6calculator)


include_directories(PP6Lib)

add_subdirectory(PP6Lib)

add_executable(pp6calculator pp6calculator.cpp)

target_link_libraries(pp6calculator pp6lib)

install(TARGETS pp6calculator DESTINATION bin)

include(CPack)

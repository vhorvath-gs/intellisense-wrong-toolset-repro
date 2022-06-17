cmake_minimum_required(VERSION 3.1)

project(repro CXX)

add_executable(exe main.cpp)

enable_testing()

add_test(NAME exe COMMAND exe)

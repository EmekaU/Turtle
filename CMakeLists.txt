cmake_minimum_required(VERSION 3.19)
project(LeanBrowser)

set(CMAKE_CXX_STANDARD 14)

add_executable(LeanBrowser main.cpp Dom.cpp Node.cpp Node.h)
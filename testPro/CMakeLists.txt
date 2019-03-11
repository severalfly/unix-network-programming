cmake_minimum_required(VERSION 3.13)
project(testPro)

set(CMAKE_CXX_STANDARD 14)

add_executable(testPro main.cpp daytimeclient.c daytimetcpsrv.c)
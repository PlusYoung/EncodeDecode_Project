cmake_minimum_required(VERSION 3.20)
project(cpj3)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpj3 proj3.cpp constants.h PpmImgClass.h ColorClass.h ColorClass.cpp PpmImgClass.cpp CheckUserOneIntInput.cpp CheckUserOneIntInput.h MessgFileClass.cpp MessgFileClass.h CheckUserTwoIntInput.cpp CheckUserTwoIntInput.h)

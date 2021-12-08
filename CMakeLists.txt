cmake_minimum_required(VERSION 3.20.2)
project(C_Rechner C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Rechner main.c 3D.c 3D.h 2D.c 2D.h)

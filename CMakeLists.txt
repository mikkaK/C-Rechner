cmake_minimum_required(VERSION 3.20.2)
project(C_rechner C)

set(CMAKE_C_STANDARD 11)

add_executable(C_rechner
        main.c 2D.c 2D.h 3D.c 3D.h basecalc.c basecalc.h lifescienc.c lifescienc.h)

# Makefile for building the vector class example
NAME = myProgram

all: main

main: main3D.cpp Vector3D.cpp
    g++ -o $(NAME) main3D.cpp Vector3D.cpp 
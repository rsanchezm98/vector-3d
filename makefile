# Makefile for building the vector class example
NAME = myProgram

all: main

main: main3D.cpp Vector3D.cpp
	g++ main3D.cpp Vector3D.cpp -o $(NAME)
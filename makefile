# Makefile for building the vector class example
NAME = myProgram

all: main

main: main3D.cpp Vector3D.cpp vector_utils.cpp
	g++ main3D.cpp Vector3D.cpp vector_utils.cpp -o $(NAME)
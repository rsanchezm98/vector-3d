# Makefile for building the vector class example
NAME_MAIN = myProgram
NAME_TEST = myTest

all: main test

main: main3D.cpp Vector3D.cpp vector_utils.cpp
	g++ main3D.cpp Vector3D.cpp vector_utils.cpp -o $(NAME_MAIN)

test: test.cpp Vector3D.cpp vector_utils.cpp
	g++ test.cpp Vector3D.cpp vector_utils.cpp -lgtest -pthread -o $(NAME_TEST) 
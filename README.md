# 3D vector C++ class
A simple class implementation of a 3d vector [x,y,z] in C++.

# 3D vector utils
There is also implemented a template library that makes operations with the Vector3D class. 

## Build
```
mkdir build
cd build
cmake ..
make
```

## GTEST verification
To check the vector_utils.hpp functions, there is implemented a test.cpp which uses google test to check its validity.

## Previous requirements
You need to have correctly installed gtest [Google Test GitHub](https://github.com/google/googletest) in order to use it. You must build the test program as done in the makefile provided. 
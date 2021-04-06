#include "Vector3D.hpp"
#include "vector_utils.hpp"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// global classes
Vector3D myVector1;
Vector3D myVector2(1.0,2.0,3.0);
VectorUtils myUtils;


int main (int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    return 0;
}
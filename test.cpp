#include "Vector3D.hpp"
#include "vector_utils.hpp"
#include <iostream>
#include "gtest/gtest.h"
#include <math.h>
 
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

TEST(Prueba1, a)
{
    EXPECT_EQ(6, squareRoot(36.0));
    EXPECT_EQ(18.0, squareRoot(324.0));
    EXPECT_EQ(25.4, squareRoot(645.16));
    EXPECT_EQ(0, squareRoot(0.0));
}
/*
TEST(DotProductTest, allTests) { 
    Vector3D myVector1(1.0,2.0,3.0);
    Vector3D myVector2(1.0,2.0,3.0);
    EXPECT_EQ(14, vector_utils::DotProduct(myVector1, myVector2));
    myVector1.setCoordinates(1.0,2.0,0.0);
    myVector2.setCoordinates(1.0,2.0,0.0);
    EXPECT_EQ(5, vector_utils::DotProduct(myVector1, myVector2));
}
*/

int main (int argc, char* argv[])
{
    std::cout << "***************** TESTING *****************" << std::endl;
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();

}
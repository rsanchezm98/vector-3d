#include "Vector3D.hpp"
#include "vector_utils.hpp"
#include <iostream>
#include "gtest/gtest.h"

TEST(Prueba1, a)
{
    EXPECT_EQ(6, 2*3);

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
    std::cout << "***************** Init Google Test () *****************" << std::endl;
    testing::InitGoogleTest(&argc, argv);

    std::cout << "***************** Run All Tests () *****************" << std::endl;
    return RUN_ALL_TESTS();

}
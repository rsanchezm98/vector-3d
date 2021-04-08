#include "Vector3D.hpp"
#include "vector_utils.hpp"
#include <iostream>
#include "gtest/gtest.h"

TEST(DotTestCase, TestDotInt)
{
    Vector3D first(0,0,0);
    Vector3D second(1,1,1);
    EXPECT_EQ(0, vector_utils::DotProduct(first,second));
    
    first.setCoordinates(1,2,3);
    second.setCoordinates(-1,2,-3);
    EXPECT_EQ(-6, vector_utils::DotProduct(first,second));

    first.setCoordinates(0,100,-100);
    second.setCoordinates(-1,90,3);
    EXPECT_EQ(8700, vector_utils::DotProduct(first,second));

    first.setCoordinates(-1,-2,-3);
    second.setCoordinates(-1,-2,-3);
    EXPECT_EQ(14, vector_utils::DotProduct(first,second));

}

TEST(DotTestCase, TestDotDouble)
{
    Vector3D first(0,0,0);
    Vector3D second(1,1,1);
    EXPECT_EQ(0, vector_utils::DotProduct(first,second));
    
    first.setCoordinates(1,2,3);
    second.setCoordinates(-1,2,-3);
    EXPECT_EQ(-6, vector_utils::DotProduct(first,second));

    first.setCoordinates(0,100,-100);
    second.setCoordinates(-1,90,3);
    EXPECT_EQ(8700, vector_utils::DotProduct(first,second));

    first.setCoordinates(-1,-2,-3);
    second.setCoordinates(-1,-2,-3);
    EXPECT_EQ(14, vector_utils::DotProduct(first,second));

}

TEST(CrossTestCase, TestCross)
{
    EXPECT_EQ(6, 6);
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
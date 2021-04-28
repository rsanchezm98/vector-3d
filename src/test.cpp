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
    Vector3D first(0.0,0.0,0);
    Vector3D second(1.0,1.0,1.0);
    EXPECT_EQ(0.0, vector_utils::DotProduct(first,second));
    
    first.setCoordinates(1.0,2.0,3.0);
    second.setCoordinates(-1.0,2.0,-3.0);
    EXPECT_EQ(-6.0, vector_utils::DotProduct(first,second));

    first.setCoordinates(0.0,100.0,-100.0);
    second.setCoordinates(-1.0,90.0,3.0);
    EXPECT_EQ(8700.0, vector_utils::DotProduct(first,second));

    first.setCoordinates(-1.0,-2.0,-3.0);
    second.setCoordinates(-1.0,-2.0,-3.0);
    EXPECT_EQ(14.0, vector_utils::DotProduct(first,second));

}

TEST(CrossTestCase, TestCross)
{

    Vector3D first(0.0,0.0,0);
    Vector3D second(1.0,1.0,1.0);
    Vector3D solution(0.0, 0.0, 0.0);
    EXPECT_EQ(solution.getCoordinates(), vector_utils::CrossProduct(first,second).getCoordinates());
    
    first.setCoordinates(1.0,2.0,3.0);
    second.setCoordinates(-1.0,2.0,-3.0);
    solution.setCoordinates(-12.0, 0.0, 4.0);
    EXPECT_EQ(solution.getCoordinates(), vector_utils::CrossProduct(first,second).getCoordinates());

    first.setCoordinates(0.0,100.0,-100.0);
    second.setCoordinates(-1.0,90.0,3.0);
    solution.setCoordinates(9300.0, 100.0, 100.0);
    EXPECT_EQ(solution.getCoordinates(), vector_utils::CrossProduct(first,second).getCoordinates());

    first.setCoordinates(-1.0,-2.0,-3.0);
    second.setCoordinates(-1.0,-2.0,-3.0);
    solution.setCoordinates(0.0, 0.0, 0.0);
    EXPECT_EQ(solution.getCoordinates(), vector_utils::CrossProduct(first,second).getCoordinates());

}

int main (int argc, char* argv[])
{
    std::cout << "***************** Init Google Test () *****************" << std::endl;
    testing::InitGoogleTest(&argc, argv);

    std::cout << "***************** Run All Tests () *****************" << std::endl;
    return RUN_ALL_TESTS();

}
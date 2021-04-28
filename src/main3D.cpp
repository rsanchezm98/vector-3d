#include "Vector3D.hpp"
#include "vector_utils.hpp"
#include <iostream>

int main ()
{
    // two ways to create the vector
    Vector3D myVector1;
    Vector3D myVector2(1.0,2.0,3.0);

    // update coordinates
    myVector1.setCoordinates(4.0,9.0,10.0);

    // print current coordinates
    std::cout << "first ---------------------------->" << std::endl;
    myVector1.printCoordinates();  
    std::cout << "second ---------------------------->" << std::endl;
    myVector2.printCoordinates();

    // compute dot product
    std::cout << "dot product: " << vector_utils::DotProduct(myVector1, myVector2) << std::endl;

    // compute cross product
    std::cout << "cross product ---------------------------->" << std::endl;
    vector_utils::CrossProduct(myVector1, myVector2).printCoordinates();
    return 0;

}
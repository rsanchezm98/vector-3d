#include "Vector3D.hpp"
#include "vector_utils.hpp"
#include <iostream>
#include <vector>

int main ()
{
    // two ways to create the vector
    Vector3D myVector1;
    Vector3D myVector2(1.0,2.0,3.0);

    // instantiate the vector utils class
    VectorUtils myUtils;
    
    // update coordinates
    myVector1.setCoordinates(4.0,9.0,10.0);

    // print current coordinates
    std::cout << "first ---------------------------->" << std::endl;
    myVector1.printCoordinates();  
    std::cout << "second ---------------------------->" << std::endl;
    myVector2.printCoordinates();

    // compute dot product
    std::cout << "dot product: " << myUtils.DotProduct(myVector1, myVector2) << std::endl;

    // compute cross product
    std::cout << "cross product ---------------------------->" << std::endl;
    myUtils.CrossProduct(myVector1, myVector2).printCoordinates();
    return 0;

}
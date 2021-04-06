#include "Vector3D.hpp"
#include "vector_utils.hpp"
#include <iostream>
#include <vector>

int main ()
{
    // two ways to create the vector
    Vector3D myVector1;
    Vector3D myVector2(1.0,2.0,3.0);

    VectorUtils myUtils;
    
    // update coordinates
    myVector1.setCoordinates(4.0,9.0,10.0);

    // print current coordinates
    myVector1.printCoordinates();  

    // compute dot scalar
    std::cout << "dot product: " << myUtils.DotProduct(myVector1, myVector2) << std::endl;

    return 0;

}
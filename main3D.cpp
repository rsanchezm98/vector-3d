#include "Vector3D.hpp"
#include <iostream>
#include <vector>

int main ()
{
    Vector3D myVector;
    
    // print initial coordinates [0,0,0]
    myVector.printCoordinates();

    std::cout << "I change coordinates to [x: 4, y: 9, z: 10]" << std::endl;

    // update coordinates
    myVector.setCoordinates(4.0,9.0,10.0);

    // print current coordinates
    myVector.printCoordinates();  

    // print only x component
    std::cout << "The x component is: " << myVector.getx() << std::endl;

    return 0;

}
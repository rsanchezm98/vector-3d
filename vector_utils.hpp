#ifndef VECTOR_UTILS_HPP
#define VECTOR_UTILS_HPP

#include <vector>
#include <iostream>
#include "Vector3D.hpp"

class VectorUtils
{
public:
    VectorUtils();
    ~VectorUtils();

    double DotProduct(Vector3D & first, Vector3D & second);

private:

};

#endif // VECTOR_UTILS_HPP

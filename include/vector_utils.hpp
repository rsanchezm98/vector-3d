#ifndef VECTOR_UTILS_HPP
#define VECTOR_UTILS_HPP

#include <vector>
#include <iostream>
#include "Vector3D.hpp"

namespace vector_utils
{

    double DotProduct(Vector3D & first, Vector3D & second);
    Vector3D CrossProduct(Vector3D & first, Vector3D & second);

} // namespace vector_utils


#endif // VECTOR_UTILS_HPP

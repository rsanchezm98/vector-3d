#include "vector_utils.hpp"

VectorUtils::VectorUtils()
{

}

VectorUtils::~VectorUtils()
{

}

double VectorUtils::DotProduct(Vector3D & first, Vector3D & second)
{
    double x_component = first.getx()*second.getx();
    double y_component = first.gety()*second.gety();
    double z_component = first.getz()*second.getz();

    double dot_product = x_component + y_component + z_component;

    return dot_product;
}
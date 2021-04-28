#include "Vector3D.hpp"

Vector3D::Vector3D()
{
    // initialize the vector with three coordinates [x,y,z]
    coordinates_.push_back(0);
    coordinates_.push_back(0);
    coordinates_.push_back(0);
}

Vector3D::Vector3D(double x, double y, double z)
{
    // initialize the vector with three coordinates [x,y,z]
    coordinates_.push_back(x);
    coordinates_.push_back(y);
    coordinates_.push_back(z);
}

Vector3D::~Vector3D()
{

}

void Vector3D::setx(double x)
{
    coordinates_[0] = x;
}

void Vector3D::sety(double y)
{
    coordinates_[1] = y;
}

void Vector3D::setz(double z)
{
    coordinates_[2] = z;
}

void Vector3D::setCoordinates(double x, double y, double z)
{
    setx(x);
    sety(y);
    setz(z);
}

void Vector3D::printCoordinates()
{
    std::cout << "3D Vector Coordinates: [x: " << coordinates_[0] 
              << "; y: " << coordinates_[1] << "; z: " << coordinates_[2] << "]" << std::endl;
}


std::vector<double> Vector3D::getCoordinates()
{   
    return coordinates_;
}

double Vector3D::getx()
{
    return coordinates_[0];
}
double Vector3D::gety()
{
    return coordinates_[1];
}
double Vector3D::getz()
{
    return coordinates_[2];
}
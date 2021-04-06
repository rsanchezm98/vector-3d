#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

#include <vector>
#include <iostream>

class Vector3D
{
public:
    Vector3D();
    ~Vector3D();

    /*
    * Functions to set x,y,z coordinates individually
    */
    void setx(double x);
    void sety(double y);
    void setz(double z);

    /*
    * Function to set x,y,z coordinates alltogether
    */
    void setCoordinates(double x, double y, double z);

    /*
    * Function to print vector coordinates
    */ 
    void printCoordinates();

    /* 
    * Function to get vector coordinates
    */
    std::vector<double> getCoordinates();

    /*
    * Functions to get individual coordinates x,y or z
    */ 
    double getx();
    double gety();
    double getz();

private:
    std::vector<double> coordinates_;
};

#endif // VECTOR3D_HPP

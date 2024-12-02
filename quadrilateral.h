#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "line.h"
#include "point.h"
#include "triangle.h"
#include <iostream>
#include <string>

class Quadrilateral
{
private:
    Point a;
    Point b;
    Point c;
    Point d;
public:
    Quadrilateral(Point a, Point b, Point c, Point d);
    Quadrilateral(const Quadrilateral &other);
    bool equals (Quadrilateral &other);
    void flip();
    void move(double x, double y);
    double getSurface();
    std::string toString();
};

#endif
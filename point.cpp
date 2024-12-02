#include "point.h"
#include <sstream>
#include <iomanip>

Point::Point(double x, double y): x(x), y(y) {};

Point::Point(const Point &other): x(other.x), y(other.y) {};

bool Point::equals(Point &other)
{
    return other.getX() == x && other.getY() == y;
};

double Point::getX()
{
    return x;
};

double Point::getY()
{
    return y;
};

void Point::flip()
{
    x *= (-1);
    y *= (-1);
};

void Point::move(double x, double y)
{
    this->x += x;
    this->y += y;
};

std::string Point::toString()
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1);
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
};


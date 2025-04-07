#include "Point.h"

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}

void Point::setX(double xVal) { x = xVal; }
void Point::setY(double yVal) { y = yVal; }
double Point::getX() const { return x; }
double Point::getY() const { return y; }

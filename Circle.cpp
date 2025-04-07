#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle() : Shape("Circle"), center(), radius(0) {}

Circle::Circle(Point c, double r) : Shape("Circle"), center(c), radius(r) {}

void Circle::Display() const {
    cout << "Circle Details:" << endl;
    cout << "Center: (" << center.getX() << ", " << center.getY() << ")" << endl;
    cout << "Radius: " << radius << endl;
}

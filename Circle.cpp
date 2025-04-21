// #include "Circle.h"
// #include <iostream>

// using namespace std;

// Circle::Circle() : Shape("Circle"), center(), radius(0) {}

// Circle::Circle(Point c, double r) : Shape("Circle"), center(c), radius(r) {}

// void Circle::Display() const {
//     cout << "Circle Details:" << endl;
//     cout << "Center: (" << center.getX() << ", " << center.getY() << ")" << endl;
//     cout << "Radius: " << radius << endl;
// }

// phase 2 updates
#include "Circle.h"
#include <cmath>
#include <iostream>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

Circle::Circle() : Shape("Circle"), center(), radius(0) {}

Circle::Circle(Point c, double r) : Shape("Circle"), center(c), radius(r) {}

void Circle::Display() const {
    cout << "Circle Details:" << endl;
    cout << "Center: (" << center.getX() << ", " << center.getY() << ")" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << Area() << endl;
    cout << "Perimeter: " << Perimeter() << endl;
}

double Circle::Area() const {
    return M_PI * radius * radius;
}

double Circle::Perimeter() const {
    return 2 * M_PI * radius;
}

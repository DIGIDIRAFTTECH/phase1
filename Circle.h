// #ifndef CIRCLE_H
// #define CIRCLE_H

// #include "Shape.h"
// #include "Point.h"
// #include <iostream>

// class Circle : public Shape {
// private:
//     Point center;
//     double radius;
// public:
//     Circle();
//     Circle(Point c, double r);
//     void Display() const override;
// };

// #endif

// phase 2 updates
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h"
#include <iostream>

class Circle : public Shape {
private:
    Point center;
    double radius;
public:
    Circle();
    Circle(Point c, double r);
    void Display() const override;
    double Area() const override;
    double Perimeter() const override;
};

#endif

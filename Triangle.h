// #ifndef TRIANGLE_H
// #define TRIANGLE_H

// #include "Shape.h"
// #include "Edge.h"
// #include "Point.h"
// #include <iostream>

// class Triangle : public Shape {
// private:
//     Edge a, b;
//     Point vertex;
//     double degree;
// public:
//     Triangle();
//     Triangle(Edge edgeA, Edge edgeB, Point v, double deg);
//     void Display() const override;
// };

// #endif


// phase 2 updates
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "Edge.h"
#include "Point.h"
#include <iostream>

class Triangle : public Shape {
private:
    Edge a, b;
    Point vertex;
    double degree;
public:
    Triangle();
    Triangle(Edge edgeA, Edge edgeB, Point v, double deg);
    void Display() const override;
    double Area() const override;
    double Perimeter() const override;
};

#endif

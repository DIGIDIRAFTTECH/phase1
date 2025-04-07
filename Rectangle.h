#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include "Edge.h"
#include "Point.h"
#include <iostream>

class Rectangle : public Shape {
private:
    Point bottomLeft;
    Edge width, height;
public:
    Rectangle();
    Rectangle(Point bl, Edge w, Edge h);
    void Display() const override;
};

#endif

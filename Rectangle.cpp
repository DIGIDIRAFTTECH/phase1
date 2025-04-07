#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() : Shape("Rectangle"), bottomLeft(), width(), height() {}

Rectangle::Rectangle(Point bl, Edge w, Edge h)
    : Shape("Rectangle"), bottomLeft(bl), width(w), height(h) {}

void Rectangle::Display() const {
    cout << "Rectangle Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Width: " << width.getLength() << endl;
    cout << "Height: " << height.getLength() << endl;
    cout << "Bottom-left Coordinates: (" << bottomLeft.getX() << ", " << bottomLeft.getY() << ")" << endl;
}

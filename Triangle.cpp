// #include "Triangle.h"
// #include <iostream>

// using namespace std;

// Triangle::Triangle() : Shape("Triangle"), a(), b(), vertex(), degree(0) {}

// Triangle::Triangle(Edge edgeA, Edge edgeB, Point v, double deg)
//     : Shape("Triangle"), a(edgeA), b(edgeB), vertex(v), degree(deg) {}

// void Triangle::Display() const {
//     cout << "Name: " << name << endl;
//     cout << "Length of Edge A: " << a.getLength() << endl;
//     cout << "Length of Edge B: " << b.getLength() << endl;
//     cout << "Coordinates of Vertex: (" << vertex.getX() << ", " << vertex.getY() << ")" << endl;
//     cout << "Angle (in degrees): " << degree << endl;
// }

// phase 2 updates
#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle() : Shape("Triangle"), a(), b(), vertex(), degree(0) {}

Triangle::Triangle(Edge edgeA, Edge edgeB, Point v, double deg)
    : Shape("Triangle"), a(edgeA), b(edgeB), vertex(v), degree(deg) {}

void Triangle::Display() const {
    cout << "Triangle Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Length of Edge A: " << a.getLength() << endl;
    cout << "Length of Edge B: " << b.getLength() << endl;
    cout << "Coordinates of Vertex: (" << vertex.getX() << ", " << vertex.getY() << ")" << endl;
    cout << "Angle (in degrees): " << degree << endl;
    cout << "Area: " << Area() << endl;
    cout << "Perimeter: " << Perimeter() << endl;
}

double Triangle::Area() const {
    // Using Heron's formula for area
    double s = (a.getLength() + b.getLength() + degree) / 2;
    return sqrt(s * (s - a.getLength()) * (s - b.getLength()) * (s - degree));
}

double Triangle::Perimeter() const {
    return a.getLength() + b.getLength() + degree;
}

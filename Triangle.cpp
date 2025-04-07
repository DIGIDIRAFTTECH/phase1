#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle() : Shape("Triangle"), a(), b(), vertex(), degree(0) {}

Triangle::Triangle(Edge edgeA, Edge edgeB, Point v, double deg)
    : Shape("Triangle"), a(edgeA), b(edgeB), vertex(v), degree(deg) {}

void Triangle::Display() const {
    cout << "Name: " << name << endl;
    cout << "Length of Edge A: " << a.getLength() << endl;
    cout << "Length of Edge B: " << b.getLength() << endl;
    cout << "Coordinates of Vertex: (" << vertex.getX() << ", " << vertex.getY() << ")" << endl;
    cout << "Angle (in degrees): " << degree << endl;
}

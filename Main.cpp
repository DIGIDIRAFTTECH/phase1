#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Edge.h"
#include "Point.h"

using namespace std;

int main(){
    Shape **a = new Shape*[3];
    a[0] = new Triangle(Edge(4), Edge(3), Point(2, 3), 90);
    a[1] = new Rectangle(Point(2, 2), Edge(5), Edge(6));
    a[2] = new Circle(Point(3, 3), 10);

    for(int i = 0; i < 3; i++) {
        a[i]->Display();
        cout << endl;
    }

    for(int i = 0; i < 3; i++)
        delete a[i];
    delete[] a;

    return 0;
}

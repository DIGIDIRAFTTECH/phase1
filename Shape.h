// #ifndef SHAPE_H
// #define SHAPE_H

// #include <string>

// class Shape {
// protected:
//     std::string name;
// public:
//     Shape(std::string n);
//     virtual void Display() const = 0; // pure virtual
//     virtual ~Shape() {}
// };

// #endif


// phase 2 updates
#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
protected:
    std::string name;
public:
    Shape(std::string n);
    virtual void Display() const = 0; // pure virtual
    virtual double Area() const = 0; // pure virtual
    virtual double Perimeter() const = 0; // pure virtual
    virtual ~Shape() {}
};

#endif

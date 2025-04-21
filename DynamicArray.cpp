#include "DynamicArray.h"
#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

#include <stdexcept>

template <class T>
DynamicArray<T>::DynamicArray() : capacity(10), numElements(0) {
    p = new T[capacity];
}

template <class T>
DynamicArray<T>::DynamicArray(int s) : capacity(s), numElements(0) {
    p = new T[capacity];
}

template <class T>
DynamicArray<T>::DynamicArray(const DynamicArray& d) : capacity(d.capacity), numElements(d.numElements) {
    p = new T[capacity];
    for (int i = 0; i < numElements; ++i) {
        p[i] = d.p[i];
    }
    std::cout << "DynamicArray => Copy constructor was called" << std::endl;
}

template <class T>
DynamicArray<T>::~DynamicArray() {
    delete[] p;
    std::cout << "DynamicArray => Destructor was called" << std::endl;
}

template <class T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray& d) {
    if (this != &d) {
        delete[] p;
        capacity = d.capacity;
        numElements = d.numElements;
        p = new T[capacity];
        for (int i = 0; i < numElements; ++i) {
            p[i] = d.p[i];
        }
        std::cout << "DynamicArray => Assignment op was called" << std::endl;
    }
    return *this;
}

template <class T>
int DynamicArray<T>::getCapacity() const {
    return capacity;
}

template <class T>
int DynamicArray<T>::getNumElements() const {
    return numElements;
}

template <class T>
T& DynamicArray<T>::operator[](int index) {
    if (index < 0 || index >= numElements) {
        throw std::out_of_range("Index out of range");
    }
    return p[index];
}

template <class T>
void DynamicArray<T>::add(const T& e) {
    if (numElements == capacity) {
        capacity *= 2;
        T* newP = new T[capacity];
        for (int i = 0; i < numElements; ++i) {
            newP[i] = p[i];
        }
        delete[] p;
        p = newP;
    }
    p[numElements++] = e;
}

template class DynamicArray<Shape*>;
template class DynamicArray<Triangle*>;
template class DynamicArray<Rectangle*>;
template class DynamicArray<Circle*>;

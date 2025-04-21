#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>
#include <stdexcept>

template <class T>
class DynamicArray {
private:
    T* p;
    int capacity;
    int numElements;

public:
    DynamicArray();
    DynamicArray(int s);
    DynamicArray(const DynamicArray& d);
    ~DynamicArray();
    DynamicArray<T>& operator=(const DynamicArray& d);
    int getCapacity() const;
    int getNumElements() const;
    T& operator[](int index);
    void add(const T& e);
};

#endif

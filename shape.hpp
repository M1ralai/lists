#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "utils.hpp"

class Rectangle:public Shape {
    public:
        Rectangle(int, int, int, int);
    // void Draw();
};

class Triangle:public Shape {
    public:
        Triangle(int, int, int, int);
    // void Draw();
};

class Star:public Shape {
    public:
        Star(int, int, int, int);
    // void Draw();
};

#endif

#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "utils.hpp"

class Rectangle:public Shape {
    void Draw();
};

class Triangle:public Shape {
    void Draw();
};

class Star:public Shape {
    void Draw();
};

#endif

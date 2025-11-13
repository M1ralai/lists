#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "utils.hpp"
#include <vector>
#include <string>

class Rectangle:public Shape {
    public:
        Rectangle(int, int, int, int, char);
        std::vector<std::string>GetWritingData();
    // void Draw();
};

class Triangle:public Shape {
    public:
        Triangle(int, int, int, int, char);
    // void Draw();
};

class Star:public Shape {
    public:
        Star(int, int, int, int, char);
    // void Draw();
};

#endif

#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "utils.hpp"
#include <vector>
#include <string>

class Rectangle:public Shape {
    public:
        //int x, int y, int z, int height, int width, char filler
        Rectangle(int, int, int, int, int, char);
        // std::vector<std::vector<char>>GetWritingData();
    // void Draw();
};

class Triangle:public Shape {
    public:
        //hight must be a odd number otherwise you cannot get a proper triangle
        //this exception handled in constructor
        Triangle(int, int, int, int, int, char);
        // std::vector<std::vector<char>>GetWritingData();
    // void Draw();
};

class Star:public Shape {
    public:
        Star(int, int, int, int, int, char);
        // std::vector<std::vector<char>>GetWritingData();
    // void Draw();
};

#endif

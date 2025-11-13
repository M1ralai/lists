#include "shape.hpp"

// Rectangle::Rectangle(int x, int y, int z, int heigth, char filler) {
//     this -> x = x;
//     this -> y = y;
//     this -> z = z;
//     this -> heigth = heigth;
//     this -> filler = filler;
// }

Rectangle::Rectangle(int x, int y, int z, int heigth, char filler) : Shape(x,y,z,heigth,filler){};
Triangle::Triangle(int x, int y, int z, int heigth, char filler) : Shape(x,y,z,heigth,filler){};
Star::Star(int x, int y, int z, int heigth, char filler) : Shape(x,y,z,heigth,filler){};
std::vector<std::string> Rectangle::GetWritingData() {
    return {};
};

// Star::Star(int x, int y, int z, int heigth, char filler) {
//     this -> x = x;
//     this -> y = y;
//     this -> z = z;
//     this -> heigth = heigth;
//     this -> filler = filler;
// }

// Triangle::Triangle(int x, int y, int z, int heigth, char filler) {
//     this -> x = x;
//     this -> y = y;
//     this -> z = z;
//     this -> heigth = heigth;
//     this -> filler = filler;
// }

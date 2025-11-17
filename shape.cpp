#include "shape.hpp"
#include <algorithm>

Rectangle::Rectangle(int x, int y, int z, int height, int width, char filler) : Shape(x,y,z,height,width,filler){
    writable = std::vector<std::vector<char>>(height, std::vector<char>(width, filler));
};
Triangle::Triangle(int x, int y, int z, int height,int width, char filler) : Shape(x,y,z,height,width,filler){
    if(width % 2 == 0) {
        this -> height = height - 1;
    }
    std::vector<std::vector<char>> res = std::vector<std::vector<char>>(height, std::vector<char>(width, filler));
    int center = (width / 2) + 1;
    for (int i = 0; i < height; i++) {
        int left  = center - i;
        int right = center + i;

        std::fill(res[i].begin(), res[i].begin() + left, ' ');
        std::fill(res[i].begin() + left, res[i].begin() + right + 1, filler);
        std::fill(res[i].begin() + right + 1, res[i].end(), ' ');
    }
    writable = res;
};
Star::Star(int x, int y, int z, int height,int width, char filler) : Shape(x,y,z,height,width,filler){
    std::vector<std::vector<char>> res(height, std::vector<char>(height/2, ' '));
    int center = height - 1;
    int mid = height / 2;
    for (int i = 0; i < height; i++) {
        int dist = (i <= mid) ? i : (height - 1 - i);
        int left = center - dist;
        int right = center + dist;

        std::fill(res[i].begin() + left, res[i].begin() + right + 1, filler);
    }
    writable = res;
};


// std::vector<std::vector<char>> Rectangle::GetWritingData() {
//     return std::vector<std::vector<char>>(height, std::vector<char>(width, filler));
// }

// std::vector<std::vector<char>> Triangle::GetWritingData() {
//     std::vector<std::vector<char>> res = std::vector<std::vector<char>>(height, std::vector<char>(width, filler));
//     int center = (width / 2) + 1;
//     for (int i = 0; i < height; i++) {
//         int left  = center - i;
//         int right = center + i;

//         std::fill(res[i].begin(), res[i].begin() + left, ' ');
//         std::fill(res[i].begin() + left, res[i].begin() + right + 1, filler);
//         std::fill(res[i].begin() + right + 1, res[i].end(), ' ');
//     }

// }

// std::vector<std::vector<char>> Star::GetWritingData() {
//     std::vector<std::vector<char>> res(height, std::vector<char>(height/2, ' '));
//     int center = height - 1;
//     int mid = height / 2;
//     for (int i = 0; i < height; i++) {
//         int dist = (i <= mid) ? i : (height - 1 - i);
//         int left = center - dist;
//         int right = center + dist;

//         std::fill(res[i].begin() + left, res[i].begin() + right + 1, filler);
//     }
//     return res;
// }


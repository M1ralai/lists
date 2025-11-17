#include "utils.hpp"

Shape::Shape(int x, int y, int z, int heigth, int width, char filler) {
    this -> x = x;
    this -> y = y;
    this -> z = z;
    this -> height = heigth;
    this -> width = width;
    this -> filler = filler;
}

void Shape::GetInput(char ch) {
#ifdef DEBUG
    std::cout<<" Shape get input: "<< ch;
#endif
    switch (ch) {
    case 'w':
        x += 1;
        break;
    case 's':
        x -= 1;
        break;
    case 'a':
        y -= 1;
        break;
    case 'd':
        y += 1;
        break;
    }
}

DoubleLinkedNode::DoubleLinkedNode(SingleLinkedNode *data) {
    this -> data = data;
    this -> next = nullptr;
    this -> prev = nullptr;
}

SingleLinkedNode::SingleLinkedNode(Shape *sh){
    this -> data = sh;
    this -> next = nullptr;
}

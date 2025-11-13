#ifndef UTILS_HPP
#define UTILS_HPP

struct Shape{
    int x;
    int y;
    int z;
    int heigth;
    void GetInput(char);
};

struct SingleLinkedNode {
    SingleLinkedNode *next;
    Shape *data;
    SingleLinkedNode(Shape*);
};


struct DoubleLinkedNode {
    DoubleLinkedNode *next;
    DoubleLinkedNode *prev;
    SingleLinkedNode *data;
    DoubleLinkedNode(SingleLinkedNode*);
};

#endif

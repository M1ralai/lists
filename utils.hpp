#ifndef UTILS_HPP
#define UTILS_HPP

struct Shape{
    int x;
    int y;
    int height;
    void GetInput(char);
};

struct SingleLinkedNode {
    SingleLinkedNode *next;
    Shape *d                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ata;
    SingleLinkedNode();
};

struct DoubleLinkedNode {
    DoubleLinkedNode *next;
    DoubleLinkedNode *prev;
    SingleLinkedNode data;
    DoubleLinkedNode();
};

#endif

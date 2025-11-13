#ifndef UTILS_HPP
#define UTILS_HPP
#include <string>
#include <vector>


class Shape{
    public:
        char filler;
        int x;
        int y;
        int z;
        int height;
        Shape(int, int, int, int, char);
        virtual ~Shape() = default;
        void GetInput(char);
        virtual std::vector<std::string> GetWritingData() = 0;
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

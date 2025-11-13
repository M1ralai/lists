#ifndef SINGLE_HPP
#define SINGLE_HPP

#include <vector>
#include "utils.hpp"

class SingleList {
    private:
        int size;
        SingleLinkedNode *head;
    public:
        SingleList();
        SingleList(SingleLinkedNode*);
        void AddToEnd(SingleLinkedNode*);
        void AddToStart(SingleLinkedNode*);
        void DeleteGivenNode(int);
        void SendInputToShape(int, char);
        std::vector<Shape> TakeShapes();
};

#endif

#ifndef DOUBLE_HPP
#define DOUBLE_HPP
#include "utils.hpp"


class DoubleList {
    private:
        int size;
        DoubleLinkedNode *head;
        DoubleLinkedNode *tail;
    public:
        DoubleList();
        DoubleList(DoubleLinkedNode*);
        void AddToEnd(DoubleLinkedNode*);
        void AddToStart(DoubleLinkedNode*);
        void DeleteGivenNode(int);
};

#endif

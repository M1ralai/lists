#include "double.hpp"

DoubleList::DoubleList() {
    this -> head = nullptr;
    this -> tail = nullptr;
    this -> size = 0;
}

DoubleList::DoubleList(DoubleLinkedNode *node) {
    node -> prev = nullptr;
    node -> next = nullptr;
    this -> head = node;
    this -> tail = node;
    this -> size = 1;
}

void DoubleList::AddToEnd(DoubleLinkedNode *node) {
    if(head == nullptr) {
        node -> prev = nullptr;
        node -> next = nullptr;
        head == node;
        tail == node;
        size += 1;
        return;
    }
    node -> next = nullptr;
    tail -> next = node;
    node -> prev = tail;
    tail = node;
    size += 1;
}

void DoubleList::AddToStart(DoubleLinkedNode *node) {
    if (head == nullptr) {
        node -> prev = nullptr;
        node -> next = nullptr;
        head = node;
        tail = node;
        size += 1;
        return;
    }
    node -> prev = nullptr;
    node -> next = head;
    head -> prev = node;
    head = node;
    size += 1;
}


void DoubleList::DeleteGivenNode(int index) {
    if (index > size && head == nullptr && tail == nullptr) {
        return;
    }
    if ((size - index ) > size /2 ) {
        DoubleLinkedNode *curr = tail;
        for(int i = size; i !=  index; i--, curr = curr -> prev);
    } else {
        DoubleLinkedNode *curr = tail;

    }
}

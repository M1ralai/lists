#include "single.hpp"
#include <iostream>


SingleList::SingleList() {
    size = 0;
    this -> head = nullptr;
}

SingleList::SingleList(SingleLinkedNode *node){
    size = 1;
    this -> head = node;
}

void SingleList::AddToEnd(SingleLinkedNode *node){
    size += 1;
    if (head == nullptr) {
        head = node;
        return;
    }
    SingleLinkedNode *curr = head;
    for(; curr -> next != nullptr; curr = curr -> next );
    curr -> next = node;
}

void SingleList::AddToStart(SingleLinkedNode *node) {
    size += 1;
    if (head == nullptr) {
        head = node;
        return;
    }
    node -> next = head;
    head = node;
}

void SingleList::DeleteGivenNode(int index) {
    if (index < 1 || index > size) {
        return;
    }
    if (index == 1) {
        SingleLinkedNode* del = head;
        head = head->next;
        delete del;
        size--;
        return;
    }
    int iter = 1;
    SingleLinkedNode* curr = head;
    while (iter < index - 1 && curr->next != nullptr) {
        curr = curr->next;
        iter++;
    }

    SingleLinkedNode* del = curr->next;
    if (del == nullptr) return;

    curr->next = del->next;
    delete del;
    size--;
}

void SingleList::SendInputToShape(int index, char input) {
    int i = 0;
    SingleLinkedNode *curr = head;
    for(; curr -> next != nullptr && i != input; curr = curr -> next, i++);
    if (curr != nullptr) {
        curr -> data -> GetInput(input);
    }   else {
        #ifdef DEBUG
        std::cout<< "There is no shape with this index"
        #endif
    }
}

std::vector<Shape*> SingleList::TakeShapes() {
    std::vector<Shape*> res;
    for(SingleLinkedNode *curr = head; curr != nullptr; curr = curr -> next)
        res.push_back(curr -> data);
    return res;
}

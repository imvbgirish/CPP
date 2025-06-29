#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void push(int value);
    void pop();
    void insertAt(int position, int value);
    void print() const;
};

#endif // LINKEDLIST_H

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node(int value);
    ~Node();

    int data;
    Node* next;
};

#endif // NODE_H

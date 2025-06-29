#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void LinkedList::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void LinkedList::pop() {
    if (head == nullptr) {
        std::cout << "List is empty, nothing to pop.\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    std::cout << "Popped: " << temp->data << "\n";
    delete temp;
}

void LinkedList::insertAt(int position, int value) {
    if (position <= 0 || head == nullptr) {
        push(value);
        return;
    }

    Node* current = head;
    int index = 0;

    while (current != nullptr && index < position - 1) {
        current = current->next;
        index++;
    }

    if (current == nullptr) {
        std::cout << "Position out of bounds\n";
        return;
    }

    Node* newNode = new Node(value);
    newNode->next = current->next;
    current->next = newNode;
}

void LinkedList::print() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}

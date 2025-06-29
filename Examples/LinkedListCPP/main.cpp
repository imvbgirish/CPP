#include "linkedlist.h"

int main() {
    LinkedList list;
    list.push(10);
    list.push(20);
    list.push(30);

    list.print();  // 30 -> 20 -> 10 -> nullptr

    list.insertAt(1, 25);
    list.print();  // 30 -> 25 -> 20 -> 10 -> nullptr

    list.pop();
    list.print();  // 25 -> 20 -> 10 -> nullptr

    return 0;
}

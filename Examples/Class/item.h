#ifndef ITEM_H
#define ITEM_H
#include <iostream>

const int size = 10;

class item{
    int number;
    float cost;
    void read(void);            //Private member function (can only access by member function)
    int arr[size];
public:
    void getdata(int a, float b);
    void putdata(void){                         //Treated as inline function
        std::cout << "Number: " << number << "\n";
        std::cout << "Cost: " << cost << "\n";
    }
};

#endif // ITEM_H

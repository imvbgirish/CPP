#include "test.h"
#include <iostream>

int test::count = 1;

void test::increment(){
    count++;
    std::cout << count << std::endl;
    //name = "Girish";  --->  //Throws error
}

void test::printNum(){
    for(int i=0; i<10; i++){
        std::cout << i << " ";
    }
    name = "Girish";   //---> Works
}

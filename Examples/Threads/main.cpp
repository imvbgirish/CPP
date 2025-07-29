#include <iostream>
#include <thread>


void search(){
    for(int i=0; i<1000000; i++){
        std::cout << i << std::endl;
    }
}

int main()
{
    std::thread T1(search);
    std::cout << "Hello World!" << std::endl;
    T1.join();

    return 0;
}

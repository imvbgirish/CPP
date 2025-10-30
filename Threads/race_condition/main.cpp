#include <iostream>
#include <thread>

//race condition --> Problem: If two threads modify the same variable concurrently → race condition.
int counter = 0;

void increment(){
    for(int i=0; i<100000; ++i){
        ++counter;
    }
}

int main()
{
    std::thread t1(increment);
    std::thread t2(increment);
    // Both threads try to read & write counter at the same time.

    t1.join();
    t2.join();

    std::cout << "Counter: " << counter << std::endl;

    return 0;
}

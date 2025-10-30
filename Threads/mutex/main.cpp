#include <iostream>
#include <mutex>
#include <thread>


int counter = 0;
std::mutex mtx; //global mutex

void increment(){
    for(int i=0; i<100000; i++){
        mtx.lock();  // only one thread can enter
        counter++;
        mtx.unlock();  // release lock for others
    }
}

void func(int n){
    std::cout << "N: " << n << std::endl;
}

int main()
{
    std::thread t1(increment);
    std::thread t2(increment);
    std::thread t3(func,10);

    std::cout << "T1 ID:" << t1.get_id() << std::endl;
    std::cout << "T2 ID:" << t2.get_id() << std::endl;

    t1.join();
    t2.join();
    t3.join();

    std::cout << "Counter: " << counter << std::endl;

    return 0;
}

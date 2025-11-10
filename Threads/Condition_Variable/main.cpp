#include <iostream>
#include <thread>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int val = 0;  //shared resource

void add(int num){
    std::lock_guard<std::mutex> lock(mtx);
    val += num;
    std::cout << "After Addition: " << val << std::endl;
    cv.notify_one();
}

void sub(int num){
    std::unique_lock<std::mutex> ulock(mtx);
    cv.wait(ulock, []{return (val != 0) ? true: false;});

    if(val >= num){
        val -= num;
        std::cout << "After Subtraction: " << val << std::endl;
    }
    else{
        std::cout << "Cannot Subtract Now" << std::endl;
    }
    std::cout << "Total Number Now: " << val << std::endl;
}

int main()
{
    std::thread t2(sub,600);
    std::thread t1(add,800);

    t1.join();
    t2.join();

    return 0;
}

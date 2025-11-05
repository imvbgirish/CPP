#include <iostream>
#include <thread>

using namespace std;

// Function Pointer
void func(int n){
    cout << "ID: " << this_thread::get_id() << endl;
    cout << "N: " << n << endl;
}

int main()
{
    // Function Pointer
    thread t1(func, 4);
    t1.join();

    int num1 = 10;
    int num2 = 4;

    //Using Lambda Expressions
    thread t2([=](){
        cout << "Num: " << num1 << endl;
    });

    thread t3([](int n){
        cout << "Num: " << n << endl;
    }, num2);

    t2.join();
    t3.join();

    return 0;
}

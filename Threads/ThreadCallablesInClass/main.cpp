#include <iostream>
#include <thread>

using namespace std;

class MyClass{
public:
    void f1(int n){
        cout << "Normal Num: " << n << endl;
    }

    static void f2(int n){
        cout << "Static Num: " << n << endl;
    }
};

int main()
{

    MyClass obj;

    thread t1(&MyClass::f1, &obj, 4);
    t1.join();

    thread t2(&MyClass::f2, 10);
    t2.join();

    return 0;
}

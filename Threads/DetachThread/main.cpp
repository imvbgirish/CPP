#include <iostream>
#include <thread>

using namespace std;

void increment(){
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Background task done." << endl;
}

int main()
{
    thread t(increment);
    t.detach(); //thread runs independently

    this_thread::sleep_for(chrono::seconds(3));
    cout << "Main thread exits." << endl;

    return 0;
}

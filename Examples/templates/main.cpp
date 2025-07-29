#include <iostream>

using namespace std;

// template <typename T>
// void add(T a,T b){
//     cout << a;
//     cout << b;
//     // return a+b;
// }

template <typename G>
void add(){
    static G count = 0;
    count++;
    cout << count << " ";
}

template <typename T>
class Entity{
private:
    T a;
    T b;

public:
    Entity(T a, T b){
        this->a = a;
        this->b = b;
    }

    void printValues(){
        cout << a << " ";
        cout << b;
    }
};

int main()
{
    // add(10,20);
    // add(10.25,20.25);
    // add("hhh","aaa");
    add<int>();
    add<double>();
    add<float>();
    add<int>();

    Entity e;

    return 0;
}

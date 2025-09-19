#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,10> arr;
    arr.fill(10);

    array<char, 10> arr1;
    arr1.fill('a');

    for(int num: arr){
        cout << num << endl;
    }

    for(char character: arr1){
        cout << character << endl;
    }

    array<int, 10> arr3;
    arr3.fill(6);

    for(int num1: arr3){
        cout << num1 << endl;
    }

    arr.swap(arr3);

    for(int num1: arr3){
        cout << num1 << endl;
    }

    cout << "isEmpty: " << boolalpha <<arr.empty() << endl;
    bool kaali = arr.empty();
    cout << "Nothing: " << kaali << endl;

    cout << "index: " << arr.at(4) << endl;
    cout << sizeof(arr) << endl;
    cout << "Size: " << arr.size() << endl;
    cout << "Max size: " << arr.max_size() << endl;

    return 0;
}

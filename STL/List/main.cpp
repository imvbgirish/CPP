#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void print(list<int>& list){

    for(auto l: list){
        cout << l << endl;
    }

    cout << "size: " << list.size() << endl;
}

int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_front(05);
    list1.push_front(00);
    list1.push_back(66);
    list1.push_back(100);

    list1.pop_back();
    list1.pop_front();

    for(auto l: list1){
        cout << "list element: " << l << endl;
    }

    print(list1);

    cout << "front element: " << list1.front() << endl;
    cout << "back element: " << list1.back() << endl;

    auto it = list1.begin();
    advance(it,2);

    *it = 26;

    for(auto l: list1){
        cout << l << endl;
    }

    auto search = find(list1.begin(), list1.end(), 26);

    if(search != list1.end())
        cout << *search << endl;
    else
        cout << "element not found" << endl;

    cout << "Hey" << endl;

    for(auto it = list1.begin(); it != list1.end(); ++it){
        cout << *it << " ";
    }

    cout << endl;
    cout << "In reverse order" << endl;
    for(auto it = list1.rbegin(); it != list1.rend(); ++it){
        cout << *it << " ";
    }

    return 0;
}

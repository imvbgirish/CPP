#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1;

    v1.reserve(10);

    v1 = {2,3,4,5};
    v1.push_back(1);
    v1.insert(v1.begin() + 2 ,60);
    v1.pop_back();

    for(unsigned i=0; i<v1.size(); i++){
        cout << v1[i] << " " << v1.at(i) << endl;
    }

    vector<char> v2 = {'a','b','c','d'};
    v2.push_back('e');

    cout << "element: " << v2[2] << endl;

    v2.erase(find(v2.begin(),v2.end(),'b'));
    v2.erase(v2.begin()+1);

    v2.emplace_back('g');
    v2.clear();

    int capacity = v2.capacity();
    cout << "Capacity: " << capacity << endl;
    cout << "Size: " << v2.size() << endl;

    return 0;
}

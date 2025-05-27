#include "vector.h"
#include <iostream>

using namespace std;


int main()
{
    Vector<int> vector;

    for(int i=1; i<=10; i++){
        vector.pushBack(i);
    }

    for(int i=0; i<vector.getSize(); i++){
        cout << vector[i] << endl;
    }

    cout << "Size: " << vector.getSize() << endl;
    cout << "Capacity: " << vector.getCapacity() << endl;

    return 0;
}

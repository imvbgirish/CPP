#include <iostream>
#include "customvector.h"

int main() {
    CustomVector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\nSize: " << vec.size() << ", Capacity: " << vec.capacity() << std::endl;

    return 0;
}

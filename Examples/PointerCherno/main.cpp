#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    void* pointer = nullptr;
    char* buffer = new char[8];  //Allocates 8 bytes of memory
    memset(buffer,0,8);  //intializes 0 for 8 bytes of memory

    char** ptr = &buffer;  //Holds address of a pointer, hence it is a double pointer
    delete[] buffer;       //Deallocating array of memory using delete operator
    cin.get();

    return 0;
}

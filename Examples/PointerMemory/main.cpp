#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    //Allocating memory for pointer variable in heap
    int *s = new int;
    float *r = new float;

    *s = 10;
    *r = 10.4;

    int *a = s;

    cout << a << endl;
    cout << s << endl;
    cout << *s << endl;
    cout << *r << endl;

    int *num = new int(25);
    cout << *num << endl;


    //Creating memory space for an array of 10 integers
    int *k = new int[10];

    for(int i=0; i<10; i++){
        k[i] = i;
    }

    for(int i=0; i<10; i++){        //k[0] will refer the first element
        cout << k[i] << " ";
    }

    //To free dynamically allocated array
    delete[] k;

    //To free dynamically allocated pointer variable;
    delete s;
    delete r;
    delete a;

    return 0;
}

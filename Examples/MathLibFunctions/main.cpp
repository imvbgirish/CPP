#include <cmath>
#include <iostream>
//#include <math.h>

using namespace std;

int main()
{
    float num = 8.4;

    cout << "Ceil: " << ceil(num) << endl;
    cout << "Floor: " << floor(num) << endl;
    cout << "Exp: " << exp(num) << endl;        //e raise to x
    cout << "Pow: " << pow(2,3) << endl;
    cout << "Log: " << log(2) << endl;
    cout << "Sqrt: " << sqrt(3) << endl;


    //Enumeration  ---> group of related constants
    enum direction{
        north = 1,east,south, west
    };

    direction d = north;

    cout << "enum: " << d << endl;

    //Structures
    struct student{
        string name;
        void doSomething();
    };

    student A;

    A.name = "Girish";

     return 0;
}

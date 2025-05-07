#include "vehicle.h"
#include <iostream>

using namespace std;

int main()
{
    Vehicle::num = 15;          //must be initialise in cpp & num is visible here bcoz it is public
    cout << Vehicle::num << endl;

    Vehicle v(4);
    v.move();
    v.stop();   //calling static function using obj

    const Vehicle v1(2);      //Constant object, meaning all its member var becomes constant & can access only constant members.

    Vehicle::stop();    //calling static function using class
    Vehicle::countHeadlights();

    cout << "Hello World!" << endl;
    return 0;
}

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    //Manipulators
    int basic = 10;
    int advance = 100;

    cout << setw(10) << "Basic" << setw(10) << basic << endl;
    cout << setw(10) << "Advance" << setw(10) << advance << endl;

    cout << numeric_limits<int>::min() << "\n";

    //Type casting
    double a = 2.0;

    int c = int(a);                 //c++ type casting
    cout << c << endl;

    int b = static_cast<int>(a);    //using static_cast
    cout << b << endl;

    return 0;
}

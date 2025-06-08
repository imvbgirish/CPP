#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream file;
    file.open("data.csv", ios::in | ios::out | ios::app);

    if(file.is_open()){

        file.close();
    }

    return 0;
}

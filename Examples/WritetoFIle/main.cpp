#include <iostream>
#include <fstream>
// #include <iomanip>

using namespace std;

int main()
{
    ofstream file;              //ofstream --> only for writing
    // file.open("data.txt");
    file.open("data.csv");

    if(file.is_open()){
        // file << setw(20) << "Hello" << setw(20) << "World!" << endl;
        file << "Id,Title,Year" << endl;
        file << "1,KGF 1,2018\n"
             << "2,KGF 2,2022\n";
        file.close();
    }

    return 0;
}

#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int,string> m1;
    m1.insert({1,"Girish"});
    m1.insert({2, "Shindi"});
    m1.insert({3, "Amith"});

   cout << m1.size() << endl;

    cout << "Hello World!" << endl;
    return 0;
}

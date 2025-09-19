#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<string> nameList = {"Girish", "Shindi"};

    nameList.insert("Amith");
    nameList.insert("Girish");  //does nothing, allows only unique

    for(const string& str: nameList){
        cout << str << endl;
    }

    auto it = nameList.find("Amith");

    if(it != nameList.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    cout << "--------------------------" << endl;

    if(nameList.count("girish"))
        cout << "Exists" << endl;
    else
        cout << "Not Exists" << endl;


    cout << "Names" << endl;
    for(auto it = nameList.begin(); it != nameList.end(); ++it )
        cout << *it << endl;

    cout << "--------------------------" << endl;

    nameList.erase("Shindi");
    nameList.erase(nameList.begin());
    for(auto it = nameList.begin(); it != nameList.end(); ++it )
        cout << *it << endl;

    return 0;
}

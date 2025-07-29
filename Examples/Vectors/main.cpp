#include "student.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    Student s1("Girish",20);
    Student s2("Darshan",10);
    Student s3("Hruthik",30);

    vector<Student> vector;
    vector.push_back(s1);
    vector.push_back(s2);
    vector.push_back(s3);

    for(const Student& s: vector){
        cout << s << endl;
    }

    cout << "Hello World!" << endl;
    return 0;
}

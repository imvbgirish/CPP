#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    //Boolean
    bool isbool = true;
    cout << isbool << endl;         //Prints 1

    //String
    string name = "Girish";
    cout << name << endl;
    cout << "Size :" << size(name) << "\n" << endl;

    //Character
    char letter = 'a';
    cout << "Letter: "<< letter << endl;

    //Character Array
    char charArr[5] = {'a','b','c'};  //Loop runs 5 times
    int i = 1;
    for(char ch: charArr){
        cout << "Character " << i++ << ": "<<ch<<endl;
    }
    cout<< "Size: " << size(charArr) << "\n" << endl;

    //For loop
    int a = 1;
    for(a=1; a<10; a++){
        cout << "Number : "<< a << endl;
    }

    //For each loop
    int array[] = {1,2,3,4,5};
    cout << "Array Elements" << endl;
    for(int arr: array){
        cout << arr << endl;
    }
    cout<< "Size : "<< size(array) << endl;
    cout<< "Size : "<< sizeof(array) << endl;


    //Average of 2 numbers
    int num1;
    int num2;

    cout << "Enter Number: "<< endl;
    cout << "Number 1: ";
    cin >> num1;

    cout << "Number 2: ";
    cin >> num2;

    //cin >> num1 >> num2;

    int average = (num1 + num2)/2;
    cout << "Average is: "<< average;

    return 0;
}

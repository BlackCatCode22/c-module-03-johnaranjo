// Jm 09/10/25
// pointers and dereferences program
#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    cout << "\nWelcome to my pointers and dereferences program!\n\n";

int age = 28;
    double gpa = 3.5;
    string name = "John";
//Address for variables
    cout << "Age:" << &age << endl;
cout << "GPA:" << &gpa << endl;
    cout << "Name:" << &name << endl;
//
    int*pAge = &age;
    double*pgpa = &gpa;
    string*pname = &name;

    cout << endl << pAge << endl;
    cout << *pAge << endl;

    cout << *&name << endl;



    return 0;

}
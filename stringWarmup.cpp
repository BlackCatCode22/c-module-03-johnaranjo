// stringwarmup.cpp
// Jm 9/08/25
#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
using namespace std;

int main() {

   cout << "\nHello and welcome to my String Warmup program!\n\n";
string name = "Carlos John Manuel Aranjo";
    cout << name << endl;
    reverse(name.begin(), name.end());
    cout << name << endl;

int length = name.length();
    cout << "\nThe length of my string is:" << length << endl;
    for (int i = 0; i <= length / 2; i++) {
        cout << "\ni = " << i << " and the char at "<< i << " is " << name[i] << endl;

char myTempChar = name[i];
        name[i] = name[length - 1 - i];
        name[length - 1 - i] = myTempChar;



        swap(name[i], name[length - 1 - i]);
        cout << "Reversed For Loop String:" << name << endl;
    }
// understand the index nature of a string object
// output the char at index(char position 5)
cout << name[17] << endl;
    cout << name[16] << endl;
    cout << name[15] << endl;
    cout << name[14] << endl;

    
    return 0;

}
//Jm 0917/25
//linkedList02.cpp
//The linked list will contain all the chars in a string named myStr with "abcDefg"
//output will be the contents of myStr in natural and reverse order
#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* pNext;
};
int main() {
    cout << "\nHello and welcome to my linked list program!\n\n";
    string myStr = "abcDefg";
    cout << myStr << endl;

    Node* head = nullptr;
    Node* pNew = new Node();
    pNew->data = myStr[0];
    pNew->pNext = nullptr;
    head = pNew;

    cout << pNew->data << "\n";
    cout << pNew->pNext << "\n";
    cout << head->data << "\n";

    Node* third = new Node();
    third->data = myStr[1];
    third->pNext = head;

    cout << "The linked list:";
    head = third;
    cout << head->pNext->data << "\n";
    cout << third->data << "\n";
    cout << "End of list.";



    return 0;
}
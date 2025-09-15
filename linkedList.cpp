//Jm 09/15/25
//linkedList.cpp
#include <iostream>
using namespace std;


struct Node {
    char data;
    Node* pNext;
};// Make the structure of the linked list
void prtList(Node* n) {
    while (n != nullptr) {
        cout << n->data;
        n = n->pNext;
    }
}// Establish the function to call the list

    int main() {
        cout << "\nWelcome to my linked list program!" << endl;
Node* pHead = new Node(); // Make the first node in the list
        Node* psecond = new Node(); // Make the second node in the list
        Node* pthird = new Node(); // Make the third node in the list
        pHead->data = 'J'; // Establish the data for the first node
        pHead->pNext = psecond; // points to the second node
        psecond->data = 'M'; // Establish the data for the second node
        psecond->pNext = pthird;
        pthird->data = 'A';
        pthird->pNext = nullptr; //last node had a pointer value of zero

        prtList(pHead); //Function to call my list

    return 0;
}
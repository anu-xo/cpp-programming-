#include <iostream>
using namespace std;
// why the error 
struct Node{
    int data;
    Node* next;
};

Node* insertAtHead(Node* head, int val){
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = head;
    return newNode;
};

//print the oitput of the linked list

void printList(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
    cout << "Null " << endl;
}
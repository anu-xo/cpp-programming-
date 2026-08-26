#include <iostream>
using namespace std;    

struct Node{
    int data;
    Node* next;
}

Node* insertAtTail(Node* head, int val){
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = nullptr;

    if (head == nullptr) return newNode;
    
    Node* temp = head;
    while (temp -> next != nullptr){
        temp = temp-> next;
    }
    temp -> next = newNode;
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
    cout << "Null " << endl;
}
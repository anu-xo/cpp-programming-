#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};  

Node* insertAtHead(Node* head, int val){
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = head;
    return newNode;
}

Node* insertAtPos(Node* head, int val, int pos){
    if (pos == 0) return insertAtHead(head, val);
    
    Node* temp = head;  
    for (int i = 0; i < pos-1 && temp != nullptr){
        temp = temp -> next;
    }

    if (temp == nullptr)return head;
    
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = temp -> next;
    temp -> next = newNode;
    return head;
    
}

void printList(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << "Null " << endl;
}
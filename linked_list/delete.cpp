#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}

Node* deleteNode(Node* head, int val){
    if (head == nullptr) return nullptr;

    if (head -> next == val){
        Node* temp = head -> next;
        delete head;
        return temp;
    }

    Node* curr = head;
    while (curr -> next != nullptr && curr -> next -> data != val){
        curr = curr -> next;
    }

    if (curr -> next == nullptr) return head;

    Node* toDelete = curr -> next;
    curr -> next = curr -> next -> next;
    delete toDelete;
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}
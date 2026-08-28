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

int main(){
    Node* head = new Node{2, nullptr};
    head -> next = new Node{3, nullptr}; //error?
    head -> next -> next = new Node{4, nullptr};
    head -> next -> next -> next = new Node{5, nullptr};
    cout << "Original Linked List: ";
    printList(head);
    cout << "After inserting 1 at front: ";
    int val = 10;
    head = insertAtHead(head, val);
    printList(head);
    return 0;
}
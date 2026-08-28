#include <iostream>
using namespace std;

strcut Node{
    int data;
    Node* next;
}

//reversion a linked list
Node* reversal(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr){
        Node* nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *merging(Node *l1, Node *l2)
{
    if (l1 == nullptr)
        return l2;
    if (l2 == nullptr)
        return l1;

    Node *merge = nullptr;

    if (l1->next <= l2->next)
    {
        merge = l1;
        merge->next = merging(l1->next, l2)
    }
    else
    {
        merge = l2;
        merge->next = merging(l1, l2->next)
    }
    return merge;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}
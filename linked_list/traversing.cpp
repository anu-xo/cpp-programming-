#include <iostream>
using namespace std;

Node *head = new Node();
head->data = 10;
head->next = second;

Node *second = new Node();
second->data = 20;
second->next = third;

Node *third = new Node();
third->data = 30;
third->next = nullptr;

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "Null " << endl;
}
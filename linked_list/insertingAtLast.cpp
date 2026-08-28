#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* insertAtLast(Node* head, int val){
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = nullptr;

    if (head == nullptr) return newNode;

    Node* temp = head;
    while (temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = newNode;
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while( temp != nullptr){
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
    cout << "Null " << endl;
}

int main(){
    Node* head = new Node{2, nullptr};
    head -> next = new Node{3, nullptr};
    head -> next -> next = new Node {4, nullptr};
    cout << "Original List: ";
    printList(head);
    int n;
    cout << "Tell me which number should i enter at last? ";
    cin >> n;
    cout << "List after inserting " << n << " at last: ";
    head = insertAtLast(head, n);
    printList(head);
    return 0;

}
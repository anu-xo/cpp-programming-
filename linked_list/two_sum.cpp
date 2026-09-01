#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* add_numbers(Node* list1, Node* list2){
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    Node* result = nullptr;
    Node* temp = nullptr;
    while (list1 != nullptr || list2 != nullptr){
        int sum = 0;
        if (list1 != nullptr){
            sum += list1 -> data;
            list1 = list1 -> next;
        }
        if (list2 != nullptr){
            sum += list2 -> data;
            list2 = list2 -> next;
        }
        if (result == nullptr){
            result = new Node();
            result -> data = sum;
            result -> next = nullptr;
            temp = result;
        } else {
            temp -> next = new Node();
            temp = temp -> next;
            temp -> data = sum;
            temp -> next = nullptr;
        }
    }
    return result;
} 

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
    cout << "Null " << endl;
}

int main(){
    Node* list1 = new Node();
    list1 -> data = 2;
    list1 -> next = new Node();
    list1 -> next -> data = 4;
    list1 -> next -> next = new Node();
    list1 -> next -> next -> data = 3;
    list1 -> next -> next -> next = nullptr;
    cout << "List 1: ";
    printList(list1);

    Node* list2 = new Node();
    list2 -> data = 10;
    list2 -> next = new Node();
    list2 -> next -> data = 20;
    list2 -> next -> next = new Node();
    list2 -> next -> next -> data = 30;
    list2 -> next -> next -> next = nullptr;
    cout << "List 2: ";
    printList(list2);

    Node* result = add_numbers(list1, list2);
    printList(result);
    return 0;
}
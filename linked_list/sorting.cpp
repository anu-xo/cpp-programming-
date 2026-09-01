#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// Used ONLY for splitting in merge sort — fast starts one step ahead
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head -> next;   // <-- the fix
    while (fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

Node* mergeTwoLists(Node* list1, Node* list2){
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    Node* temp = nullptr;
    if (list1 -> data <= list2 -> data){
        temp = list1;
        temp -> next = mergeTwoLists(list1 -> next, list2);
    }
    else{
        temp = list2;
        temp -> next = mergeTwoLists(list1, list2 -> next);
    }
    return temp;
}

Node* sortList(Node* head){
    if (head == nullptr || head -> next == nullptr) return head;

    Node* mid = findMiddle(head);
    Node* rightHalf = mid -> next;
    mid -> next = nullptr;   // actually cuts the list now

    Node* left = sortList(head);
    Node* right = sortList(rightHalf);

    return mergeTwoLists(left, right);
}

void printList(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << "-> ";
        temp = temp -> next;
    }
    cout << "Null" << endl;
}

int main(){
    Node* list1 = new Node();
    list1 -> data = 72;
    list1 -> next = new Node();
    list1 -> next -> data = 30;
    list1 -> next -> next = new Node();
    list1 -> next -> next -> data = 412;
    list1 -> next -> next -> next = nullptr;
    cout << "List 1 : ";
    printList(list1);

    Node* list2 = new Node();
    list2 -> data = 78;
    list2 -> next = new Node();
    list2 -> next -> data = 30;
    list2 -> next -> next = new Node();
    list2 -> next -> next -> data = 9;
    list2 -> next -> next -> next = nullptr;
    cout << "List 2 : ";
    printList(list2);

    Node* merging = mergeTwoLists(list1, list2);
    cout << "Merged lists: ";
    printList(merging);

    Node* sorting = sortList(merging);
    cout << "Sorted list: ";
    printList(sorting);

    return 0;
}
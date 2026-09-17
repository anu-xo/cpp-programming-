#include <iostream>
using namespace std;\

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = nullptr;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

    public:
    DoublyList(){
        head = tail = nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if (head == nullptr){
            head = tail = newNode;
        }
        else{
            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if (head == nullptr){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if (head == nullptr) return;

        Node* temp = head;
        head = head -> next;

        if (head != nullptr){
            head -> prev  = nullptr;
        }
        temp -> next = nullptr;
        delete temp;

    }

    void pop_back(){
        if (head == nullptr)return;

        Node* temp = tail;
        tail = tail -> prev;

        if (tail != nullptr){
            tail -> next = nullptr;
        }
        temp -> prev = nullptr;
        delete temp;
    }

    void printList(){
        Node* temp = head;
        while (temp != nullptr){
            cout << temp -> data << "-> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    DoublyList dll;
    dll.push_front(49);
    dll.push_front(23);
    dll.push_back(56);
    dll.push_back(78);
    dll.pop_front();
    dll.pop_back();
    dll.printList();
    return 0;
} 

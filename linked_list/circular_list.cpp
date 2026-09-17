#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class CircularList{
    Node* head;
    Node* tail;

    public:
    CircularList(){
        head = tail = nullptr;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);

        if (head == nullptr){
            head = tail = newNode;
            tail -> next = newNode;
        }else{
            newNode -> next = head;
            head = newNode;
            tail -> next = head;
        }
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);

        if (head == nullptr){
            head = tail = newNode;
            tail -> next = newNode;
        }else{
            newNode -> next = head;
            tail -> next = newNode;
            tail = newNode;

        }
    }

    void deleteAtHead(){
        if (head == nullptr){
            return;
        }
        else if(head == tail){
            delete head;
            head = tail = nullptr;
        }
        else
        {
            Node* temp = head;
            head = head -> next;
            tail -> next = head;
            
            temp -> next = nullptr;
            delete temp;
        }
    }

    void deleteAtTail(){
        if (head == nullptr){
            return;
        }
        else if (head == tail){
            delete head;
            head = tail = nullptr;
        }
        else{
            Node* temp = tail;
            Node* prev = head;
            while (prev -> next != tail){
                prev = prev -> next;
            }
            tail = prev;
            tail -> next = head;

            temp -> next = nullptr;
            delete temp;
            }
        }
    

    void printList(){
    if (head == nullptr)
        return;

    Node* temp = head;

    do {
        cout << temp->data << "-> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)" << endl;
}
};

int main(){
    CircularList cll;
     cll.insertAtHead(199);
     cll.insertAtHead(23);
     cll.insertAtTail(56);
     cll.insertAtTail(78);
     cll.deleteAtHead();
     cll.deleteAtTail();
     cll.printList();
    return 0;
}
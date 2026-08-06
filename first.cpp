#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct shopping{
    string itemName;
    int price;

    void input(){
        cout << "Enter item name: ";
        cin >> itemName;
        cout << "Enter item price: ";
        cin >> price;
    };

    void output(){
        cout << "Item you purchased is: " << itemName << endl;
        cout << "Price of the item you purchased is: " << price << endl;
    };
};

int main(){
    shopping s;
    s.input();
    s.output();
    getch();
    return 0;
}
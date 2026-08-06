#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >=70 ){
        cout << "Grade A" << endl;
    }else if (marks >= 60 && marks <70){
        cout << "Grade B" << endl;
    }else if (marks >=50 && marks <60){
        cout << "Grade C" << endl;
    }else if (marks >=40 && marks < 50){
        cout << "Grade D" << endl;
    }else if (marks >= 30 && marks < 40){
        cout << "Grade F" << endl;
    }
    else {
        cout << "You are fail" << endl;
    }
    return 0;
};
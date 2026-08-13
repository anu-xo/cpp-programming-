#include <iostream>
using namespace std;

int sumNum(int n){
    if (n == 0){
        return 0;
    }
    return n + sumNum(n-1);

};

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Sum is: " << sumNum(num) << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reverse(int n){
    int rev = 0;
    int digit;
    while (n>0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;

    }
    return rev;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    int digit = reverse(num);
    cout << "Reversed number is: " << digit << endl;
    return 0;
}
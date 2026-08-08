#include <iostream>
using namespace std;

bool palindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (rev == original) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    int result = palindrome(num);

    if (result == 1) {
        cout << num << " is a palindrome number" << endl;
    }
    else {
        cout << num << " is not a palindrome number" << endl;
    }
}
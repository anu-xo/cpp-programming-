#include <iostream>
using namespace std;

int main(){
    int num;
    int count;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number you entered is " << num << endl;
    count =to_string(num).length();
    cout << "The number of digits are: " << count << endl;
    return 0;
}    
// 


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countdigits(int n){
    int count = 0;
    while (n>0){
        n = n /10;
        count++;
    }
    return count;
}

int main(){
    int num;
    cout << "heyy!! Today i am going to count the digits of a number" << endl;
    cout << "Please enter a number: ";
    cin >> num;
    int digits = countdigits(num);
    cout << "The number of digits in " << num << "is: " << digits << endl;
    return 0;
}
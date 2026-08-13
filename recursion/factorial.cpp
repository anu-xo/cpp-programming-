#include <iostream>
using namespace std;

class solution{
    public:
    int factorial(int n){
        if (n == 0){
            return 1; 
        }
        return n*factorial(n - 1);
    }
};

int main(){
    solution obj;
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Factorial is: "<< obj.factorial(num) << endl;
    return 0;

}
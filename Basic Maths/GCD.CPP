#include <iostream>
using namespace std;

class Solution{
    public:
    int gcd(int a, int b){
        while (b!=0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main(){
    Solution obj;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = obj.gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << result << endl;
    return 0;
}
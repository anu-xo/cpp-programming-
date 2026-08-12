#include <iostream>
using namespace std;

class Solution{
    public:
    void printName(int count, int n){
        if (count == n){
            return;
        }
        cout << "Anuradha" << endl;
        printName(count + 1, n);
    }

};

int main(){
    Solution obj;
    int n;
    cout << "Enter the number of times to print the name: ";
    cin >> n;
    obj.printName(0,n);
    return 0;


}
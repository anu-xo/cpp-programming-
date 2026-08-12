#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> divisor(int n){
        vector<int> res;
        for (int i = 1; i <= n; i++){
            if (n % i == 0){
                res.push_back(i);
            }
        }
        return res;
    }
};

int main(){
    Solution obj;
    int a;
    cout << "Enter number: ";
    cin >> a;
    vector<int> result = obj.divisor(a);
    cout << "Divisors of "<< a<< ": ";
    for (int val : result){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
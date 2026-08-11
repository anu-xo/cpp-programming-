#include <iostream>
#include <cmath>
using namespace std;

class Solution{
	public:
	int armstrong(int n){
		int sum=0;
		int digit = 0;
		int temp = n;
		int original = n;
		while (temp>0){
			temp = temp / 10;
			digit ++;
		}
		temp = n;
		while (temp > 0){
  			int tempLast = temp % 10;
			sum = sum + pow(tempLast, digit);
			temp = temp/10;
		}
		if (original == sum){
			return 1;
		}
		else {
			return 0;
		}
}
};

int main(){
    Solution obj;
    int a;
    cout << "Enter number: ";
    cin >> a;
    int result = obj.armstrong(a);
    if (result == 1){
        cout << a << " is a Armstrong number." << endl;
    }
    else {
        cout << a << " is not a Armstrong number." << endl;
    }
}
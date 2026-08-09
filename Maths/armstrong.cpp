#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int armstrong(int n)
    {
        int original = n;
        string a = to_string(int(n));
        int len = a.length();
        int arm = 0;
        while (n > 0)
        {
            int temp = n % 10;
            arm = arm + pow(temp, len);
            n = n / 10;
        }
        if (arm == original)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Solution obj;
    int a;
    cout << "Enter number: ";
    cin >> a;
    int result = obj.armstrong(a);

    if (result == 1)
    {
        cout << a << " is an Armstrong number." << endl;
    }
    else
    {
        cout << a << " is not an Armstrong number." << endl;
    }
    return 0;
}
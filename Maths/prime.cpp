#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution obj;
    int a;
    cout << "Enter number: ";
    cin >> a;
    int result = obj.isPrime(a);
    if (result == false)
    {
        cout << "Not a prime number.";
    }
    else
    {
        cout << "Prime number.";
    }
    return 0;
}
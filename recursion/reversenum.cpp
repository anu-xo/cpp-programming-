#include <iostream>
using namespace std;

class solution
{
public:
    void reverse(int count, int N)
    {
        if (count == N)
        {
            return;
        }
        cout << N << " ";
        reverse(count, N - 1);
    }
};
int main()
{
    solution obj;
    int num;
    cout << "Enter number: ";
    cin >> num;
    obj.reverse(0, num);
    return 0;
}

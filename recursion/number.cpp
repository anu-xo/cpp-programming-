#include <iostream>
using namespace std;

class solution
{
public:
    void printNumbers(int count, int N)
    {
        if (count == N)
        {
            return;
        }
        cout << count << " ";
        printNumbers(count + 1, N);
    }
};

int main()
{
    solution obj;
    int num;
    cout << "Enter number: ";
    cin >> num;
    obj.printNumbers(0, num);
    return 0;
}
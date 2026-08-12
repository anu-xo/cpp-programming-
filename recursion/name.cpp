// #include <iostream>
// using namespace std;

// class Solution{
//     public:
//     void printName(int count, int n){
//         if (count == n){
//             return;
//         }
//         cout << "Anuradha" << endl;
//         printName(count + 1, n);
//     }

// };

// int main(){
//     Solution obj;
//     int n;
//     cout << "Enter the number of times to print the name: ";
//     cin >> n;
//     obj.printName(0,n);
//     return 0;


// }




#include <iostream>
using namespace std;

class Solution{
    public:
    void printName(int count, int N){
        if (count == N){
            return;
        }
        cout << "Uddhav" << endl;
        printName(count + 1, N);
    }
};

int main(){
    Solution obj;
    int N;
    cout << "Enter number of times your name should be printed: ";;
    cin >> N;
    obj.printName(0,N);
    return 0;
}
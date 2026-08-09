// #include <iostream>
// using namespace std;

// int main(){
//     for (int i = 1; i <= 5; i ++){
//         for (int j = 1; j <= i; j++){
//             cout << j;
//         }
//         for (int k = 1; k <= 2*(5-i); k++){
//             cout << " ";
//         }
//         // for (int l = 1; l <= 5-i; l++){
//         //     cout << " ";
//         // }
//         for (int m = i; m >= 1; m--){
//             cout << m;
//         }
//         cout << endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

class NumberRHS{
    public:
    void print(int n){
        int num = 1;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                cout << num << " ";
                num = num + 1;
            }
            cout << endl;
        }

    }
};
int main(){
    NumberRHS obj;
    obj.print(5);
    return 0;
}

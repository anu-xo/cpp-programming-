#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++){
        for (int j =1; j <= 5-i; j++){
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++){
            cout << "*";
        }
        // for (int l =1; l <= i-1; l++){
        //     cout << "*";
        // }
        cout << endl;
    }
    return 0;
}
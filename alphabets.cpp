#include <iostream>
using namespace std;

class Alphabets{
    public:
    void abcc(int n){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                    cout << char('A' + j -1);
            }
            cout << endl;
        }
    }
};

int main(){
    Alphabets obj;
    obj.abcc(5);
    return 0;
}
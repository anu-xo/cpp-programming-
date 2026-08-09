#include <iostream>
using namespace std;

<<<<<<< HEAD
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
=======
int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
>>>>>>> e77fcee8f250f8d754d5606ccaeb465da4fd469a
    return 0;
}
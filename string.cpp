#include <iostream>
#include <string>

using namespace std;

class solution {
public:
    string modifystring(string s) {
        string newStr = s;
        newStr[0] = 'A';
        return newStr;
    }
};

int main() {
    string original = "Anuradha";

    solution obj;

    string modified = obj.modifystring(original);

    cout << "Original string: " << original << endl;
    cout << "Modified string: " << modified << endl;

    return 0;
}
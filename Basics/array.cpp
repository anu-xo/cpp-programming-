#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ihavetofindlength(string s) {
        return s.length();
    };

};
int main() {
    Solution obj;
    string s = "Hello, Anuradha!!";

    cout << "Your string is: " << s << endl;
    cout << "Length of your string is: " << obj.ihavetofindlength(s) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string modifystring(string str){
        string newstr = str;
        newstr[0] = toupper(newstr[0]);
        return newstr;
    }
};

int main(){
    Solution obj;
    string str = "march";
    cout << "My string is: " << str << endl;
    string s = obj.modifystring(str);
    cout << "My modifies string is: " << s << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string campare(string str1, string str2){
        if (str1 == str2){
            return "Both strings are equal";
        }
        else {
            return "Strings are unequal";
        }
    }
};

int main(){
    Solution obj;
    string str1 = "Anuradha";
    string str2 = "Anuradha";
    cout << "String 1 is: " << str1 << endl;
    cout << "String 2 is: " << str2 << endl;
    string s = obj.campare(str1,str2);
    cout << "Result of camparison is: " << s << endl;
    return 0;
}
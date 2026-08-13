#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter num: ";
    cin >> q;
    while (q--){
        int num;
        cout << "Enter number to search: ";
        cin >> num;
        cout << hash[num] << endl;

    }

    return 0;
}
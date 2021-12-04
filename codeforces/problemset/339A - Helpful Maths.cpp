#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<int> arr;
    
    for (int i = 0; i < str.size(); i++) {
        if(str.at(i) != '+') {
            arr.push_back(str.at(i) - '0');
        }
    }
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {
            int aux = arr[i];
            if(arr[j] < arr[i]) {
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if(i == arr.size() - 1) {
            cout << arr[i] << "\n";
        } else {
            cout << arr[i] << "+";
        }
    }

    return 0;
}

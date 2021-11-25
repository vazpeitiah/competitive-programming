#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    cin >> s;
    int count=0;
    
    for(int i = 0; i < s.size()/2; i++) {
        if(s[i] != s[s.size()-i-1]) {
            count++;
        }
    }
    
    if(count == 1) {
        cout << "YES" << "\n";
    }else {
        if(count == 0 &&  s.size() % 2 != 0){
            cout << "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
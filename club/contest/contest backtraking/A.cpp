#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long  N;
    cin >> N;
    bool ispal = true;
    
    if(N != 0) {
        while(N % 10 == 0) {
            N = N / 10;
        }
        
        string s = to_string(N);
        
        for(int i = 0; i < s.size()/2 && ispal; i++) {
            if(s[i] != s[s.size()-i-1]) {
                ispal = false;
            }
        }
    }
    
    if(ispal) {
        cout << "Yes" << "\n";
    }else {
        cout << "No" << "\n";

    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, j;
    cin >> t;
    string s;
    bool f=true;
    while(t-- > 0) {
        cin >> s;
        if(s.size() % 2 == 0) {
            j=s.size()/2;
            f=true;
            for (int i = 0; i < s.size()/2 && f; i++) {
                //cout << s.at(i) << " == " << s.at(j) << endl;
                if(s.at(i) != s.at(j)) {
                    f=false;
                }
                j++;
            }
        }else {
            f=false;
        }
        
        if(f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

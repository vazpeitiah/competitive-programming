#include <bits/stdc++.h>

using namespace std;

string test(string p){
    for (int i = 0; i < p.size(); i++) {
        if(p[i] == 'H') {
            return "YES";
        } else if(p[i] == 'Q') {
            return "YES";
        } else if(p[i] == '9') {
            return "YES";
        } 
    }
    return "NO";
}

int main() {
    string p;
    cin >> p;
    
    cout << test(p) << "\n";

    return 0;
}

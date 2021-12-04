#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    int cont = 0;
    char curr;
    for (int i = 0; i < str.size() && cont < 7; i++) {
        if(i == 0) {
            curr = str.at(i);
            cont++;
        } else {
            if(str.at(i) == curr) {
                cont++;
            } else {
                cont = 1;
                curr = str.at(i);
            }
        }
    }
    
    //cout << cont << '\n';
    
    if(cont >= 7) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}

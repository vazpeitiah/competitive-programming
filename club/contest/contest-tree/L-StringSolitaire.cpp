#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, cA=0, cB=0, cC=0;
    cin >> t;
    string cases[t];
    
    for (int i = 0; i < t; i++) {
        cin >> cases[i];
    }
    
    for (int i = 0; i < t; i++) {
        cA=0;cB=0;cC=0;
        if(cases[i].size() % 2 != 0){
            cout << "NO" << "\n";
        } else {
            for (int j = 0; j < cases[i].size(); j++) {
                if(cases[i][j] == 'A'){
                    cA++;
                } else if(cases[i][j] == 'B'){
                    cB++;
                } else if(cases[i][j] == 'C'){
                    cC++;
                }
            }
            if(cB != cases[i].size()/2) {
                cout << "NO" << "\n";
            } else {
                cout << "YES"<< "\n" ; 
            }
        }
    }
    
    

    return 0;
}

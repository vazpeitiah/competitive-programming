#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> aux(3);
    
    for(int i=0; i<t; ++i) {
        for(int j=0; j<aux.size(); ++j) {
            int ci;
            cin >> ci;
            aux[j] = ci;
        }
        sort(aux.begin(), aux.end());
        cout << "Case " << i + 1 << ": " << aux[aux.size()/2] << "\n";
    }

    return 0;
}

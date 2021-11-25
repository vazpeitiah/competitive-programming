#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> nombres(n);
    vector<pair<string, string>> comandos(m);
    
    string a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        nombres[i] = make_pair(a, b);
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        b.pop_back();
        comandos[i] = make_pair(a, b);
        for (int j = 0; j < n; j++) {
            if (comandos[i].second == nombres[j].second){
                cout << comandos[i].first << " " << nombres[j].second << ";" << " #" << nombres[j].first << "\n";
            } 
        }
        
    }

    return 0;
}
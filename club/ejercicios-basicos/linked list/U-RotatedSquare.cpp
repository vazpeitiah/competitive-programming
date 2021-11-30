#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> rotate(vector<vector<char>> square){
    vector<vector<char>> rotatedSquare(square.size());
    for(int i = 0; i < square.size(); i++) {
        rotatedSquare[i].resize(square.size());
        for(int j = 0; j < square.size(); j++) {
            rotatedSquare[i][j] = square[square.size()-j-1][i];
        }
    }
    return rotatedSquare;
}

int main() {
    int n, m;
    string str;
    vector<vector<char>> big(1000);
    vector<vector<char>> small(1000);
    vector<int> results(4);

    while(true) {
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        big.clear();
        small.clear();
        big.resize(n);
        small.resize(m);
        str.clear();
        fill(results.begin(), results.end(), 0);

        getline(cin, str);

        for(int i = 0; i < n; i++){
            getline(cin, str);
            for (int j = 0; j < str.size(); ++j) {
                big[i].push_back(str.at(j));
            }
        }

        for(int i = 0; i < m; i++){
            getline(cin, str);
            for (int j = 0; j < str.size(); ++j) {
                small[i].push_back(str.at(j));
            }
        }

        for(int t = 0; t < results.size(); t++) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(i+m <= n && j+m <= n) {
                        int cnt = 0;
                        for(int k = 0; k < m; k++) {
                            for(int l = 0; l < m; l++) {
                                if(big[i+k][j+l] == small[k][l])
                                    cnt++;
                            }
                        }
                        if(cnt == m*m)
                            results[t]++;
                    }
                }
            }
            small = rotate(small);
        }
        
        for (int i = 0; i < results.size(); i++) {
            if(i != results.size()-1) {
                cout << results[i] << " ";
            } else {
                cout << results[i] << "\n";
            }
        }
    }
    return 0;
}
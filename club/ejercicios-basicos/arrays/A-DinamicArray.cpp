#include <bits/stdc++.h>

using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    vector<int>ansArray;
    int lastAnswer = 0;
    
    for (int i = 0; i < queries.size(); i++) {
        if(queries[i][0] == 1) {
            int idx = (queries[i][1] ^ lastAnswer) % n;
            arr[idx].push_back(queries[i][2]);
        } else if (queries[i][0] == 2){
            int idx = (queries[i][1] ^ lastAnswer) % n;
            lastAnswer = arr[idx][queries[i][2] % arr[idx].size()];
            ansArray.push_back(lastAnswer);
        }
    } 

    return ansArray;
}

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> queries(q);
    
    for(int i = 0; i < q; i++) {
        queries[i].resize(3);
        for(int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }
    }
    
    vector<int> result = dynamicArray(n, queries);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
    
    return 0;
}
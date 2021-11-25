#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> matrix(5);
    int movs = 0; 
    
    for (int i = 0; i < 5; i++) {
      matrix[i].resize(5);
      for (int j = 0; j < 5; j++) {
        cin >> matrix[i][j];
        if(matrix[i][j] == 1) {
          movs += abs(i - 2) + abs(j - 2);
        }
      }
    }
    
    cout << movs << "\n"; 

    return 0;
}
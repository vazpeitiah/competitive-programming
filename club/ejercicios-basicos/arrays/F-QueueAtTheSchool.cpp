#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    char str[n];
    
    for (int i = 0; i < n; i++) {
      cin >> str[i];
    }
    
    for (int i = 1; i <= t; i++) {
      for (int j = 0; j < n; j++) {
        if(str[j] == 'B' && j+1 < n) {
          if(str[j+1] == 'G'){
            str[j] = 'G';
            str[j+1] = 'B';
            j++;
          }
        }
      }
    }
    
    for (int i = 0; i < n; i++) {
      cout << str[i];
    }
    cout << endl;

    return 0;
}
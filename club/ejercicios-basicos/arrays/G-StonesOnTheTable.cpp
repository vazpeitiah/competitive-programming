#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, del=0;
    cin >> n;
    vector<char> stones(n);
    
    for (int i = 0; i < n; i++) {
      cin >> stones[i];
    }
    
    for (int i = 0; i < n; i++) {
      if(i+1 < n) {
        if(stones[i] == stones[i+1]){
          del++;
        }
      }
    }
    
    cout << del << endl;

    return 0;
}
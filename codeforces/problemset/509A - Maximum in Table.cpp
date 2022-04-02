#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;
  vector<vector<int> > a(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    a[0][i] = 1;
    a[i][0] = 1;
  }

  int maxi = 1;

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      a[i][j] = a[i-1][j] + a[i][j-1]; 
      maxi = max(maxi, a[i][j]);
    }
  }  

  cout << maxi << endl;
  
  return 0;
}
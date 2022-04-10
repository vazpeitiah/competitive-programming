#include <bits/stdc++.h>

using namespace std;

int main () {
  string s;
  int m, l, r, n;
  
  cin >> s;

  n = s.size();

  vector<int> a(n, 0);
  for (int i = 1; i < n; i++) {
    if(s.at(i-1) == s.at(i)) {
      a[i] = 1;
    }
  }

  vector<int> sum(n, 0);
  sum[1] = a[1];
  for (int i = 2; i < n; i++) {
    sum[i] = sum[i-1] + a[i];
  }
  
  cin >> m;

  for(int i=0; i<m; i++) {
    cin >> l >> r;
    cout << sum[r-1] - sum[l-1] << endl;
  }

  return 0;
}
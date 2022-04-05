#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, m;
  cin >> n;
  vector<int> b(n);
  for(int i=0; i<n; i++) {
    cin >> b[i];
  }

  cin >> m;
  vector<int> g(m);

  for(int i=0; i<m; i++) {
    cin >> g[i];
  }
  sort(b.begin(), b.end());
  sort(g.begin(), g.end());

  int ans = 0;

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(abs(b[i] - g[j]) <= 1) {
        ans++;
        g[j]=1000;
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
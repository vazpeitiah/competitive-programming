#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  set<int> check;
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }

  vector<int> ans(n+1, 0);

  for(int i=n-1; i >= 0; i--) {
    if(check.find(a[i]) == check.end()) {
      check.insert(a[i]);
      ans[i] = ans[i+1] + 1;
    } else {
      ans[i] = ans[i+1];
    }
  }

  int q;
  while(m--) {
    cin >> q;
    cout << ans[q-1] << endl; 
  }

  return 0;
}
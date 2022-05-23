#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; 
  cin >> t;
  int n;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> m;
    int ans=0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if(m.find(a[i]) == m.end()) {
        m[a[i]] = 1;
        ans++;
      } else {
        m[a[i]]++;
      }
    }

    cout << ans << endl;
  }
  return 0;
}

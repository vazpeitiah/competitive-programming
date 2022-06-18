#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int t; cin >> t;
  while(t--) {  
    int n; cin >> n;
    int minx = INT_MAX;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      minx = min(minx, a[i]);
    }
    int ans = 0;
    for(int i=0; i<n; i++) {
      ans += a[i] - minx;
    }

    cout << ans << endl;
  }
  return 0;
}
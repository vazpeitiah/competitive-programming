#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n, mini, maxi;
  while(t--) {
    cin >> n;
    vector<int> a(n);
    mini = INT_MAX;
    maxi = INT_MIN;
    int pmin, pmax;
    for(int i=0; i<n; i++) {
      cin >> a[i];
      mini = min(mini, a[i]);
      maxi = max(maxi, a[i]);
      if(mini == a[i]) {
        pmin = i;
      }
      if(maxi == a[i]) {
        pmax = i;
      }
    }

    int ans = min({
      max(pmax, pmin) + 1,
      (n-1) - min(pmax, pmin) + 1,
      (n-1) - pmax + pmin + 2,
      (n-1) - pmin + pmax + 2
    });

    cout << ans<< endl;
  }
  return 0;
}
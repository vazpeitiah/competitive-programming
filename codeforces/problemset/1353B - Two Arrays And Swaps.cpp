#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n, k, ans;
  cin >> t;
  while(t-- > 0) {
    cin >> n >> k;
    ans=0;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < k; i++) {
      if(b[n-1-i] > a[i]) {
        a[i] = b[n-1-i];
      }
    }

    for (int i = 0; i < n; i++) {
      ans += a[i];
    }
    
    
    cout << ans << endl;

  }
  return 0;
}
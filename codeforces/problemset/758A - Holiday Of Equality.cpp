#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  long long ans = 0;
  for (int i = 0; i < n-1; i++) {
    ans += a[n-1] - a[i];
  }

  cout << ans << endl;
  
  return 0;
}
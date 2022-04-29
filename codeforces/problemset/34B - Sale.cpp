#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, m, x, ans=0;
  cin >> n >> m;
  vector<int> a;
  for(int i=0; i<n; i++) {
    cin >> x;
    if(x<0) {
      a.push_back(abs(x));
    }
  }

  sort(a.begin(), a.end(), greater<int>());

  for(int i=0; i<m && i<a.size(); i++) {
    ans += a[i];
  }

  cout << ans << endl;
  return 0;
}
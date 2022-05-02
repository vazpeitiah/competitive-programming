#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n; cin >> n;
  int x=1, ans=0;
  while(x<=n/2) {
    if((n-x) % x == 0) ans++;
    x++;
  }

  cout << ans << endl;
  return 0;
}
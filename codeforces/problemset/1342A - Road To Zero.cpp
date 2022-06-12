#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int t; cin >> t;
  long long x, y;
  long long a, b;
  while(t--) {
    cin >> x >> y;
    cin >> a >> b;

    long long ans;

    if(2*a > b) {
      ans = min(x, y) * b + (max(x, y) - min(x, y)) * a;
    } else {
      ans = (x + y) * a;  
    }

    cout << ans << endl;
  }
  return 0;
}
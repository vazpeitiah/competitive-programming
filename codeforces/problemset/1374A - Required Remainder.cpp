#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n, x, y;
  while(t--) {
    cin >> x >> y >> n;

    if(n-n%x+y <= n) {
      cout << n-n%x+y << endl;
    } else {
      cout << n-n%x-(x-y) << endl;
    }
  }
  return 0;
}
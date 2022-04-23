#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t, n; cin >> t;
  while(t--) {
    cin >> n;
    for(int i = 2; i <=n; i++) {
      cout << i << " ";
    }
    cout << 1 << endl;
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n, m;
  while(t--) {
    cin >> m >> n;
    cout << (n*m + 1) / 2 << endl;
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int h, m;
  while(t--) {
    cin >> h >> m;
    cout << (23-h)*60 + (60-m) << endl;
  }

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n, m, k;
  cin >> n >> m >> k;
  if(n <= min(m, k)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n, k;
  while(t--) {
    cin >> n >> k;
    cout << k+(k-1)/(n-1) << endl;
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int t; cin >> t;
  int l, r;

  while(t--) {
    cin >> l >> r;

    if(2*l <= r) {
      cout << l << " " << 2*l << endl;
    } else {
      cout << -1 << " " << -1 << endl;
    }
   
    
  }

  return 0;
}
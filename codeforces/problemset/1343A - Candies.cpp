#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n, sum, x, k;
  while(t--) {
    cin >> n;
    
    for(int i=2; i<=29; i++) {
      int res = pow(2, i) - 1;
      if(n%res == 0) {
        cout << n/res << endl;
        break;
      }
    }
  }
  return 0;
}
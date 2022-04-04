#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, w, h, n, res;
  cin >> t;
  
  while(t--) {
    cin >> w >> h >> n;
    res = 1;
    while(w%2 == 0) {
      w /= 2;
      res *=2;
    }
    while(h%2 == 0) {
      h /= 2;
      res *=2;
    }

    cout << (n <= res ? "YES" : "NO") << endl;

  }
  return 0;
}
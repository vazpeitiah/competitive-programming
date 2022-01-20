#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n;
  cin >> t;

  while(t-- > 0) {
    cin >> n;
    if(n%4 == 0) {
      cout << "YES" << endl;
      n /= 2;
      for (int i = 1; i <= n; i++) {
        cout << i * 2 << ' ';
      }

      for (int i = 1; i < n; i++) {
        cout << i * 2 - 1 << ' ';
      }

      cout << 3 * n - 1 << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
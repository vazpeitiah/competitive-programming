#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n, a, b, ai;
  cin >> t;
  while(t--) {
    cin >> n;
    a=0;b=0;
    for (int i = 0; i < n; i++) {
      cin >> ai;
      if(ai==1) {
        a++;
      } else {
        b++;
      }
    }

    if((a + 2*b) % 2 == 0) {
      int m = (a + 2*b) / 2;
      if(m % 2 == 0 || (m % 2 == 1 && a != 0)) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  int a, b, c, n, t;
  cin >> t;
  
  while(t--) {
    cin >> a >> b >> c >> n;

    int maxi = max({a, b, c});
    int dif = 3 * maxi - (a+b+c);
    if(n-dif < 0) {
      cout << "NO" << endl;
    } else if((n-dif) % 3 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  int t,a,b;
  cin >> t;
  while(t--) {
    cin >> a >> b;
    if(a!=0) {
      cout << a + 2 * b + 1 << endl;
    } else {
      cout << 1 << endl;
    }
  }
  return 0;
}
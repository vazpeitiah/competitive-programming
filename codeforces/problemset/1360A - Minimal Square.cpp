#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, a, b;
  cin >> t;
  while(t-- > 0) {
    cin >> a >> b;

    int side = min(max(a, 2*b), max(2*a, b));
    cout << side * side << endl;
  }
  return 0;
}
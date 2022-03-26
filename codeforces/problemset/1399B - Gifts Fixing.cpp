#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n, minb, mina;
  long long movs;
  cin >> t;
  while(t-- > 0) {
    cin >> n;
    minb = INT_MAX;
    mina = INT_MAX;
    vector<int> a(n);
    vector<int> b(n);
    movs=0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mina = min(mina, a[i]);
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      minb = min(minb, b[i]);
    }

    for (int i = 0; i < n; i++) {
      movs += a[i] - mina + b[i] - minb - min(a[i] - mina, b[i] - minb);
    }

    cout << movs << endl;
  }
  return 0;
}
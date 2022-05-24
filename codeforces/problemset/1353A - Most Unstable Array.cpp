#include<bits/stdc++.h>

using namespace std;

int main () {
  int t; cin >> t;
  int n, m;
  while(t--) {
    cin >> n >> m;
    cout << min(2, n-1) * m << endl;
  }
  return 0;
}

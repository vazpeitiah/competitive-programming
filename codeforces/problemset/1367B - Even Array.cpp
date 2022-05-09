#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n, nodd, neven, movs;
  vector<int> a;
  while(t--) { 
    cin >> n;
    a.clear(); a.resize(n);
    nodd=0; neven=0; movs=0;
    for(int i=0; i<n; i++) {
      cin >> a[i];
      if(a[i] % 2 == 0) {
        neven++;
      } else {
        nodd++;
      }

      if(i%2 != a[i]%2) movs ++;
    }

    if(n%2 == 0 && nodd == neven) {
      cout << movs/2 << endl;
    } else if(n % 2 != 0 && nodd == n/2 && neven == n/2+1) {
      cout << movs/2 << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
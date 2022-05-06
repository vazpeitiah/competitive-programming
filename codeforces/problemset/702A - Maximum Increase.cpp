#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  
  int maxt = 1;
  int prev = a[0];
  int maxi = 1;
  for(int i=1; i<n; i++) {
    if(a[i] > prev) {
      maxi++;
    } else {
      maxt = max(maxi, maxt);
      maxi = 1;
    }
    prev = a[i];
  }

  maxt = max(maxi, maxt);

  cout << maxt << endl;

  
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () { 
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int t; cin >> t;
  int n;
  while(t--) {
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    if(sum < n) {
      cout << 1 << endl;
    } else {
      cout << sum-n << endl;
    }
  }
  
  return 0;
}
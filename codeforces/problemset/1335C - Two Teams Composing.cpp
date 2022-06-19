#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int t; cin >> t;
  int n; 
  while(t--) {
    cin >> n;
    int diff = 0;
    vector<int> a(n+1, 0);
    for(int i = 0; i < n; i++) {
      int x; cin >> x;
      a[x]++;
      if(a[x] == 1) {
        diff++;
      }
    }

    int maxe = *max_element(a.begin(), a.end());

    cout << max(min(diff-1, maxe), min(diff, maxe-1)) << endl;
  }
  return 0;
}
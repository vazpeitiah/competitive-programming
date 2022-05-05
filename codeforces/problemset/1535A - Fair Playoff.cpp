#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int maxi, prev_max;
  while(t--) {
    vector<int> a(4);
    maxi = INT_MIN; prev_max = INT_MIN;
    for(int i=0; i<a.size(); i++) {
      cin >> a[i];
      if(a[i] > maxi) {
        prev_max = maxi;
        maxi = a[i];
      } else if(a[i] > prev_max) {
        prev_max = a[i];
      }
    }

    //cout << maxi << " " << prev_max << endl;

    if(max(a[0], a[1]) == maxi) {
      if(max(a[2], a[3]) == prev_max) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      if(max(a[0], a[1]) == prev_max) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
    
    

  }
  return 0;
}
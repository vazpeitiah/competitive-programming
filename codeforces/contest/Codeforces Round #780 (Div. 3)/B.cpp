#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    bool ans = true;

    if(a.size() == 1 && a[0] > 1) {
      ans = false;
    }

    while(!a.empty() && ans) {
      if(a.size() == 1) {
        a.pop_back();
      } else {
        if(a[n-1] - a[n-2] > 1) {
          ans = false;
        } else {
          a.pop_back();
          a.pop_back();
        }
      }
    }

    cout << (ans ? "YES" : "NO") << endl;
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &a, int x) {
  int m;
  int l=0, r=a.size()-1;

  while(l<=r) {
    m = l + (r-l) / 2;

    if(x < a[m]) {
      r = m - 1;
    } else {
      l = m + 1;
    }
  }

  return l;
}

int main () {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> q;
    int mi;
    for(int i=0; i<q; i++) {
      cin >> mi;
      cout << solve(a, mi) << endl;
    }

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n;
  cin >> t;
  while(t-- > 0) {
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    vector<int> v = a;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
      if(a[1] != v[i]) {
        cout << i + 1 << endl;
      }
    }
    
  }
  return 0;
}
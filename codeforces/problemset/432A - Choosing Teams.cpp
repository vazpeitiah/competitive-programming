#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, k, c=0;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0; i<n; i++) {
    cin >> a[i];
    if(5 - a[i] >= k) {
      c++;
    }
  }
  cout << c/3 << endl;
}

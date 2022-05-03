#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n, a, b;
  vector<int> arr(30);
  for(int i=1; i<=30; i++) {
    arr[i-1] = pow(2, i);
  }
  while(t--) {
    cin >> n;
    a=0; b=0;

    for(int i=n/2-1; i<n-1; i++) a += arr[i];
    for(int i=0; i<n/2-1; i++) b+= arr[i];
    b += arr[n-1];

    cout << abs(a-b) << endl;
  }
  return 0;
} 
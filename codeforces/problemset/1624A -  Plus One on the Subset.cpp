#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n, maxa;
  cin >> t;
  while(t--) {
    maxa = -1;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      maxa = max(maxa, arr[i]);
    }
    int dfmax = -1;
    for (int i = 0; i < n; i++) {
      dfmax = max(dfmax, maxa - arr[i]);
    }

    cout << dfmax << endl;
  }
  return 0;
}
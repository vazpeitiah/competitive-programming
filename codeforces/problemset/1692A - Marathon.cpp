#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;

  while(t--) {
    int ans = 0;
    int arr[4];

    for(int i=0; i<4; i++) {
      cin >> arr[i];
      if(i > 0 && arr[i] > arr[0]) {
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
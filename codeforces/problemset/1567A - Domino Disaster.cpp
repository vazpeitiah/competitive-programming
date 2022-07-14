#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int t, n;
  cin >> t;
  string s;
  while(t--) {
    cin >> n >> s;
    for(int i=0; i<n; i++) {
      char c = s.at(i);
      if(c == 'D') {
        cout << 'U';
      } else if (c == 'U') {
        cout << 'D';
      } else {
        cout << c;
      }
    }
    cout << endl;
  }
  return 0;
}
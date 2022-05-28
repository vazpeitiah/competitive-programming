#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int t; cin >> t;
  int n;
  string s;
  while(t--) {
    cin >> n; cin >> s;
    int ans=0; int b=0;
    for(int i=0; i<n; i++) {
      if(s.at(i) == '(') b++;
      else {
        b--;
        if(b <0 ) {
          ans++;
          b=0;
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}
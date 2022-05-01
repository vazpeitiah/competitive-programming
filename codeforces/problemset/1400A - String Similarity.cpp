#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t; cin >> t;
  int n;
  string s;
  while(t--) {
    cin >> n;
    cin >> s;
    string ans(n, '0');
    ans[0] = s.at(0);
    int idx=0;

    for(int i=0; i<=s.size()-n; i++) {
      string sub = s.substr(i, n);
      if(sub.at(idx) != ans.at(idx)) {
        idx++;
        ans[idx] = sub.at(idx);
      }
    }

    cout << ans << endl;
  }
  return 0;
}
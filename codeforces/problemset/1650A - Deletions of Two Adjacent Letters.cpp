#include <bits/stdc++.h>

using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  string s;
  char c;

  while (t--) {
    cin >> s;
    cin >> c;
    bool ans = false;

    for(int i=0; i<s.size(); i++) {
      if(s[i] == c && i % 2 == 0) {
        ans = true;
        break;
      }
    }

    cout << (ans ? "YES" : "NO") << endl;
  }

  return 0;
}
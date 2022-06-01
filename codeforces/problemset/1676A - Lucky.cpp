#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int t; cin >> t;
  string s;
  int ml, mr;
  while(t--) {
    cin >> s;
    ml=0; mr=0;
    for(int i=0; i<s.size(); i++) {
      if(i<s.size()/2) ml += s[i]-'0';
      else mr += s[i]-'0';
    }

    cout << (ml==mr ? "YES" : "NO") << endl;
  }
  return 0;
}
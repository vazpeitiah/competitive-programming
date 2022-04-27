#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  string s; cin >> s;
  bool f = false;
  string h;
  for(int i=0; i<5 && !f; i++) {
    cin >> h;
    if(s.at(0) == h.at(0) || s.at(1) == h.at(1))
      f=true;
  }
  
  cout << (f ? "YES" : "NO") << endl;
  return 0;
}
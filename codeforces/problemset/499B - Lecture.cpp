#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int n, m;
  cin >> n >> m;
  map<string, string> ma;
  while(m--) {
    string a, b;
    cin >> a >> b;
    ma[a] = b;
  }

  while(n--) {
    string s;
    cin >> s;
    if(ma[s].size() < s.size()) {
      cout << ma[s] << " ";
    } else {
      cout << s << " ";
    }
  }

  cout << endl;

  return 0;
}
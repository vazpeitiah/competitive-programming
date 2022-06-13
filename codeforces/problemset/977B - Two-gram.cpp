#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n; cin >> n;
  string s; cin >> s;
  map<string, int> m;
  for(int i=0; i<n-1; i++) {
    string tgram = s.substr(i, 2);
    if(m.find(tgram) == m.end()) {
      m[tgram] = 1;
    } else {
      m[tgram]++;
    }
  }

  auto iter = m.begin();
  string ans;
  int maxi = INT_MIN;
  while(iter != m.end()) {
    if(iter->second > maxi) {
      maxi = iter->second;
      ans = iter->first;
    }

    iter++;
  }

  cout << ans << endl;
  return 0;
}
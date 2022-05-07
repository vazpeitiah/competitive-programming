#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n; cin >> n;
  string s; cin >> s;

  int n1=0, n0=0;
  for(int i=0; i<n; i++) {
    if(s.at(i) == '0') n0++;
    else n1++;
  }

  cout << abs(n1 - n0) << endl;

  return 0;
}
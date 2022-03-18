#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, n;
  string s;
  cin >> t;
  while(t-- > 0) {
    bool ans = false;
    vector<int> l(26, 0);
    cin >> n;
    cin >> s;

    char aux = s.at(0);
    for (int i = 1; i < n; i++) {
      if(s.at(i) != aux) {
        l[aux - 65]++;
        aux = s.at(i);
      }
    }

    l[s.at(n-1) - 65]++;

    for (int i = 0; i < n; i++) {
      if(l[s.at(i) - 65] > 1) {
        ans = true;
      } 
    }
    
    cout << (ans ? "NO" : "YES") << endl;
  }
  return 0;
}
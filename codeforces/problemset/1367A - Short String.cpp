#include <bits/stdc++.h>

using namespace std;

int main () {
  int t;
  cin >> t;
  string str, ans;

  while (t-- > 0) {
    cin >> str;
    ans.clear();
    for(int i=0; i < str.size(); i+=2) {
      ans.push_back(str.at(i));
    }
    ans.push_back(str.at(str.size()-1));

    cout << ans << endl;
  }

  return 0;
}
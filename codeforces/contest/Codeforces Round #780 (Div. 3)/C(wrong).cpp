#include <bits/stdc++.h>

using namespace std;

int main () {
  int t;
  cin >> t;
  string s;
  while(t--) {
    cin >> s;
    if(s.empty()) {
      cout << 0 << endl;
      continue;
    }
    map<char, int> m;
    for(int i = 0; i < s.size(); i++) {
      m[s[i]]++;
    }

    string str;

    int ans = 0, curr;

    for (int i = 0; i < s.size(); i++) {
      if(m[s.at(i)] != 1) {
        str.push_back(s.at(i));
      } else {
        ans++;
      }
    }

    if(str.empty()) {
      cout << ans << endl;
      continue;
    }
    
    int fixlr = 0, fixrl=0, ansrl=ans;
    bool flag;

    //cout << str << endl;
    for (int i = 0; i < str.size()-1; i++) {
      curr = 0;
      flag = false;
      for (int j = i+1; j < str.size(); j++) {
        if(str.at(i) != str.at(j)) {
          curr++;
        } else {
          ans += curr;
          fixlr += curr;
          i += curr + 1;
          flag = true;
          break;
        }
      }
      if(curr > 0 && !flag) {
        ans++;
        fixlr++;
      }
    }

    if((str.size()-fixlr) % 2 != 0) {
      ans++;
    }

    reverse(str.begin(), str.end());

    for (int i = 0; i < str.size()-1; i++) {
      curr = 0;
      flag = false;
      for (int j = i+1; j < str.size(); j++) {
        if(str.at(i) != str.at(j)) {
          curr++;
        } else {
          ansrl += curr;
          fixrl += curr;
          i += curr + 1;
          flag=true;
          break;
        }
      }
      if(curr > 0 && !flag) {
        ansrl++;
        fixrl++;
      }
    }

    if((str.size()-fixrl) % 2 != 0) {
      ansrl++;
    }
    
    cout << ans << endl;
  }
  return 0;
}
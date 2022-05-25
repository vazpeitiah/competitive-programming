#include<bits/stdc++.h>

using namespace std;

int main() {
  char d; cin >> d;
  string s; cin >> s;
  string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

  for(char c : s) {
    for(int i=0; i<keys.size(); i++) {
      if(c==keys.at(i) && d=='L') {
        cout << keys.at(i+1);
        break;
      } else if(c==keys.at(i) && d=='R') {
        cout << keys.at(i-1);
        break;
      }
    }
  }

  cout << endl;
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int findPos(string a, char b) {
    for (int i = 0; i < a.size(); i++) {
        if (a.at(i) == b) {
            return i+1;
        }
    }
    return -1;
}

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int t; cin >> t;
  string a, s;
  while(t--) {
    cin >> a >> s;
    int last = findPos(a, s.at(0));
    int time = 0;
    for(int i=1; i<s.size(); i++) {
        int curr = findPos(a, s.at(i));
        
        time += abs(curr - last);

        last = curr;
    }

    cout << time << endl;
  }
  return 0;
}
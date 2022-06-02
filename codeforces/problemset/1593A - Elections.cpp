#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int t; cin >> t;
  int a, b, c;
  while(t--) {
    cin >> a >> b >> c;
    int maxi = max(a, max(b, c));
    int cnt = 0;
    if(a==maxi) cnt ++;
    if(b==maxi) cnt ++;
    if(c==maxi) cnt ++;

    if(cnt > 1) {
      cout << maxi - a + 1 << " " << maxi - b + 1 << " " <<  maxi - c + 1 << endl;
    } else {
      if(a==maxi) cout << 0 << " " << maxi - b + 1 << " " <<  maxi - c + 1 << endl;
      if(b==maxi) cout << maxi - a + 1 << " " << 0 << " " <<  maxi - c + 1 << endl;
      if(c==maxi) cout << maxi - a + 1 << " " << maxi - b + 1 << " " <<  0 << endl;
    }

  }
  return 0;
}
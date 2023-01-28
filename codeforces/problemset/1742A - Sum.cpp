#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int t;
  int a, b, c;
  cin >> t;


  while(t--) {
    bool ans = false;

    cin >> a >> b >> c;

    if(a == b + c) {
      ans = true;
    } else
    
    if(b == a + c) {
      ans = true;
    } else 

    if(c == a + b) {
      ans = true;
    }

    cout << (ans ? "YES" : "NO") << endl;
  }

  return 0;
}
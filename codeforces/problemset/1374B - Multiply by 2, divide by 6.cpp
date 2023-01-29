#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;

  while(t--) {
    int n; 
    cin  >> n;

    int ctn2=0;
    while(n % 2 == 0) {
      ctn2++;
      n = n/2;
    }

    int ctn3=0;
    while(n % 3 == 0) {
      ctn3++;
      n = n/3;
    }

    if(n != 1) {
      cout << "-1" << endl;
    } else {
      if(ctn2 > ctn3) {
        cout << "-1" << endl;
      } else {
        cout << (ctn3 - ctn2) + ctn3 << endl;
      }
    }

  }

  return 0;
}
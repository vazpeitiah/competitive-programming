#include <bits/stdc++.h>

using namespace std;

int main () {
  int t, x, digits;
  cin >> t;
  while(t--) {
    cin >> x;
    digits=0;
  
    if(x / 1000 > 0) { /* 4 digits */
      digits += x/1000 * 10;
    } else if(x / 100 > 0) { /* 3 digits */
      digits += (x / 100 - 1) * 10 + 6;
    } else if(x / 10 > 0) { /* 2 digits */
      digits += (x / 10 - 1) * 10 + 3;
    } else { /* 1 digit */
      digits += (x - 1) * 10 + 1; 
    }

    cout << digits << endl;
  }
  return 0;
}
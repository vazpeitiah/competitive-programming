#include <iostream>

using namespace std;

int main () {
  int t; cin >> t;
  int x, y, z, maxi, maxio, pmaxi;
  while(t--) {
    cin >> x >> y >> z;
    maxi = max(x, max(y, z));
    maxio=0;
    if(maxi == x) maxio ++;
    else pmaxi = x;
    if(maxi == y) maxio ++;
    else pmaxi = y;
    if(maxi == z) maxio ++;
    else pmaxi = z;
   
    if(maxio == 2) {
      cout << "YES" << endl;
      cout << maxi << " " << pmaxi << " " << 1 << endl;
    } else if(maxio == 3) {
      cout << "YES" << endl;
      cout << maxi << " " << maxi << " " << maxi << endl;
    } else {
      cout << "NO" << endl;
    } 
  }
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int y, w; cin >> y >> w;
  int p1 = 6 - max(y, w) + 1;

  if(p1 == 6) cout << "1/1" << endl;
  else if(p1 == 1 || p1 == 5) cout << p1 << "/6" << endl; 
  else if(p1 == 2 || p1 == 4) cout << p1/2 << "/3" << endl;
  else if(p1 == 3) cout << "1/2" << endl;
  
  return 0;
}
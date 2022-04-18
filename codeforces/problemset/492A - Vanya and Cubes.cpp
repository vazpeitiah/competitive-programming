#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n; cin >> n;
  int level=0, cubes=0;
  while(cubes < n) {
    level++; 
    for(int i=1; i<=level; i++) cubes+=i;
  }
  
  cout << (cubes == n ? level : level-1) << endl;

  return 0;
}
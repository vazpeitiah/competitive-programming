#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b){
  int s=0;

  for(int i=a; i<= b; i++) {
    s += i;
  }

  return s;
}

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n; cin >> n;

  int l=1, r=1, ans=0, curr;

  while(r <= n) {
    curr = sum(l, r);
    if(curr == n){
      ans++;
      r++;
    }
    else if(curr < n)
      r++;
    else 
      l++;
  }

  cout << ans << endl;
  return 0;
}
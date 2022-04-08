#include <bits/stdc++.h>

using namespace std;

int dp[10000001];

void precalc(int sum) {
  if(dp[sum] != 0) 
    return;
  if(sum > 10000000) 
    return;

  dp[sum] = 1;

  precalc(sum+2020);
  precalc(sum+2021);
}


int main () {
  int t, n;
  cin >> t;
  memset(dp, 0, sizeof(dp));

  precalc(0);

  while(t--) {
    cin >> n;
    cout << (dp[n] == 1 ? "YES" : "NO") << endl;
  }
  return 0;
}
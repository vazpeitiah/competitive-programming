#include <bits/stdc++.h>

using namespace std;

long long dp[26][26];

long long solve(int r, int c, int N) {
  
  if(r < 0 || r > N || c < 0 || c > N)
    return 0;

  if(dp[r][c] != -1) return dp[r][c];

  if(r == 0 && r == 0)
    return 1;
 
  long long res = solve(r-1, c, N) + solve(r, c-1, N);
  dp[r][c] = res;

  return res;
}

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int N;
  memset(dp, -1, sizeof(dp));

  cin >> N;

  cout << solve(N, N, N+1) << endl;

  return 0;
}//1128981880
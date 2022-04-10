#include <bits/stdc++.h>

using namespace std;

int m, s;
int dp[1001][201];
int dp2[1001][201];

string buscar_min(string curr, int pos, int sum) {
  if(sum > s)
    return "-1";

  if(dp[sum][pos] != -1) 
    return "-1";

  dp[sum][pos] = 1;

  if(curr.size() == m)
    return sum == s ? curr : "-1";

  for(int i=0; i<=9; i++) {
    if(i==0 && pos==0) continue; // no leading zeros
    char c = i + '0';
    string res = buscar_min(curr + c, pos+1, sum+i);
    if(res != "-1") return res;

  }

  return "-1";
}

string buscar_max(string curr, int pos, int sum) {
  if(sum > s)
    return "-1";

  if(dp2[sum][pos] != -1) 
    return "-1";

  dp2[sum][pos] = 1;

  if(curr.size() == m)
    return sum == s ? curr : "-1";

  for(int i=9; i >= 0; i--) {
    if(i==0 && pos==0) continue; // no leading zeros
    char c = i + '0';
    string res = buscar_max(curr + c, pos+1, sum+i);
    if(res != "-1") return res;

  }

  return "-1";
}

int main () {
  cin >> m >> s;
  memset(dp, -1, sizeof(dp));
  memset(dp2, -1, sizeof(dp2));
  cout << buscar_min("", 0, 0) << " " << buscar_max("", 0, 0);
  return 0;
}
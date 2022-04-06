#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj_list;
vector<bool> visited;

bool solve(int curr, int dest) {
  visited[curr] = false;
  if(curr == dest) return true;

  int next; bool res;
  for(int i=0; i<adj_list[curr].size(); i++) {
    next = adj_list[curr][i];
    if(!visited[next]) {
      //cout << next + 1 << " ";
      return solve(next, dest);
    }
  }

  return false;
}

int main () {
  int n, t;
  cin >> n >> t;

  adj_list.resize(n);
  visited.resize(n, false);

  int a;
  for (int i = 0; i < n-1; i++) {
    cin >> a;
    adj_list[i].push_back(i + a);
  }

  /* for (int i = 0; i < n; i++) {
    cout << i+1 << ": ";
    for (int j = 0; j < adj_list[i].size(); j++) {
      cout << adj_list[i][j]+1 << " ";
    }
    cout << endl;  
  } */

  //cout << 1 << " ";
  
  cout << (solve(0, t-1) ? "YES" : "NO") << endl;
  
  return 0;
}
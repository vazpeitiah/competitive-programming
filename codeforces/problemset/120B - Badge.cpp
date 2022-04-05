#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj_list;
vector<bool> visited;

int dfs(int curr) {
  visited[curr] = true;

  for(int i=0; i<adj_list[curr].size(); i++) {
    int next = adj_list[curr][i];
    if(!visited[next]) {
      return dfs(next);
    } else {
      return next;
    }
  }
}

int main () {
  int n;
  cin >> n;

  adj_list.resize(n);
  visited.resize(n, false);

  int e;
  for (int i = 0; i < n; i++) {
    cin >> e;
    adj_list[i].push_back(e-1);
  }

  for (int i = 0; i < n; i++) {
    cout << dfs(i) + 1 << " ";
    visited.clear();
    visited.resize(n, false);
  }
  cout << endl;

  return 0;
}
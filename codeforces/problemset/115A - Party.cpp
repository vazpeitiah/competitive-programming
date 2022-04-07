#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj_list;
vector<bool> visited;

int depth(int curr, int level) {
  //cout << curr << " " << level << endl;
  visited[curr] = true;

  int maxl = level;

  int next;
  for (int i = 0; i < adj_list[curr].size(); i++) {
    next = adj_list[curr][i];
    if(!visited[next]) {
      maxl = max(maxl, depth(next, level+1));
    }
  }

  return maxl;
}

int main () {
  int n;
  cin >> n;

  adj_list.resize(n);
  visited.resize(n, false);

  int p;

  vector<int> roots;

  for(int i=0; i<n; i++) {
    cin >> p;
    if(p != -1) {
      adj_list[p-1].push_back(i);
    } else {
      roots.push_back(i);
    }
  }

  /* for (int i = 0; i < n; i++) {
    cout << i+1 << ": ";
    for (int j = 0; j < adj_list[i].size(); j++) {
      cout << adj_list[i][j]+1 << " ";
    }
    cout << endl;
  } */

  int maxi = INT_MIN;
  for(int i=0; i<roots.size(); i++) {
    maxi = max(maxi, depth(roots[i], 1));
  }
  
  cout << maxi << endl;

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
  // input
  // 7
  // 0 1
  // 0 5
  // 0 6
  // 1 4
  // 2 0
  // 5 6
  // 6 3
  // 6 4

  // 1. Matriz de adjacencia
  int v; // numero de vertices
  cin >> v;
  int x, y;
  vector<vector<int> > adj(v, vector<int>(v, 0));
  vector<pair<int, int> > uv;
  
  for(int i=0; i<v; i++) {
    cin >> x >> y;
    uv.push_back(make_pair(x, y));
    adj[x][y] = 1;
    adj[y][x] = 1; // porque es no dirigido
  }

  for(int i=0; i<v; i++) {
    for(int j=0; j<v; j++) {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }

  // 2. lista de adyacencia
  vector<vector<int> > adj_list(v, vector<int>());

  for(int i=0; i<v; i++) {
    adj_list[uv[i].first].push_back(uv[i].second);
    adj_list[uv[i].second].push_back(uv[i].first); // porque es no dirigido
  }

  for (int i = 0; i < adj_list.size(); i++) {
    cout << i << ": ";
    sort(adj_list[i].begin(), adj_list[i].end());
    for (int j = 0; j < adj_list[i].size(); j++) {
      cout << adj_list[i][j] << " ";
    }
    cout << endl;
  }
  

  return 0;
}
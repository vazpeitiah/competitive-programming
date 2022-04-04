#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj_list;
vector<bool> visited;

void DFS(int curr) {
  visited[curr] = true;

  for (int i = 0; i < adj_list[curr].size(); i++) {
    int next = adj_list[curr][i];
    if(!visited[next]) { // Si aun no hemos visitado a next
      cout << next+1 << endl;
      DFS(next);
    }
  }
}

int main () {
  int N; // # de nodos
  int M; // # de arista
  
  cin >> N >> M;

  adj_list.resize(N);
  visited.resize(N, false);

  int u, v;
  for(int i=0; i<M; i++) {
    cin >> u >> v;
    adj_list[u-1].push_back(v-1);
    adj_list[v-1].push_back(u-1);
  }

  cout << 0 + 1 << endl;
  DFS(0);
  
  return 0;
}
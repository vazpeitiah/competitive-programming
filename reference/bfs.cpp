#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj_list;
vector<bool> visited;

void BFS(int curr) {
  queue<int> que;
  que.push(curr);
  visited[curr] = true;

  int next;
  while(!que.empty()) {
    next = que.front();
    cout << "f " << que.front()+1 << ": ";
    que.pop();

    for(int i=0; i<adj_list[next].size(); i++) {
      int node = adj_list[next][i];
      if(!visited[node]) {
        cout << node + 1 << " ";
        visited[node] = true;
        que.push(node);
      }
    }
    cout << endl;

  }
}

int main () {
  int N; // # de nodos del grafo
  int M; // # de aristas

  cin >> N >> M;
  adj_list.resize(N);
  visited.resize(N, false);

  int u,v;
  for(int i=0; i<M; i++) {
    cin >> u >> v;
    adj_list[u-1].push_back(v-1);
    adj_list[v-1].push_back(u-1);
  }

  BFS(0);

  return 0;
}
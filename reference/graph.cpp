#include <bits/stdc++.h>

using namespace std;

int main () {
  // input
  // 7 8
  // 0 1
  // 0 5
  // 0 6
  // 1 4
  // 2 0
  // 5 6
  // 6 3
  // 6 4

  int N; // Numero de nodos del grafo
  int M; // Numero de aristas a leer
  cin >> N >> M;
  int x, y;
  vector<pair<int, int> > uv(M);
  
  // 1. Matriz de adjacencia
  vector<vector<int> > adj(N, vector<int>(N, 0));
  
  for(int i=0; i<M; i++) {
    cin >> x >> y;
    uv[i] = make_pair(x, y);
    adj[x][y] = 1;
    adj[y][x] = 1; // porque es no dirigido
  }

  cout << "Matriz de adyacencia" << endl;

  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }

  // 2. lista de adyacencia
  vector<vector<int> > adj_list(N, vector<int>());

  for(int i=0; i<M; i++) {
    adj_list[uv[i].first].push_back(uv[i].second);
    adj_list[uv[i].second].push_back(uv[i].first); // porque es no dirigido
  }

  cout << "Lista de adyacencia" << endl;

  for (int i = 0; i < adj_list.size(); i++) {
    cout << i << ": ";
    sort(adj_list[i].begin(), adj_list[i].end());
    for (int j = 0; j < adj_list[i].size(); j++) {
      cout << adj_list[i][j] << " ";
    }
    cout << endl;
  }

  // 3. Lista de aristas
  vector<pair<int, int> > edges;

  for(int i=0; i<M; i++) {
    edges.push_back(uv[i]);
    edges.push_back({uv[i].second, uv[i].first}); 
  }

  cout << "Lista de aristas" << endl;

  for (int i = 0; i < edges.size()-1; i+=2) {
    cout << edges[i].first << ", " << edges[i].second << "\t";
    cout << edges[i+1].first << ", " << edges[i+1].second << endl;
  }

  return 0;
}
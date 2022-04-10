#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj_list;
vector<bool> visited;

void bfs(int curr, int x) {
  queue<int> que;
  que.push(curr);
  visited[curr] = true;
  int front, node;
  vector<int> level(visited.size());

  level[curr] = 0;

  while(!que.empty()) {
    front = que.front();
    que.pop();

    //cout << "v " << front << ": ";

    if(front == x)  {
      cout << level[x] << endl;
      return;
    }
    
    for(int i=0; i<adj_list[front].size(); i++) {
      node = adj_list[front][i];
      if(!visited[node] && !adj_list[front].empty()) {
        visited[node] = true;
        level[node] = level[front] + 1;
        //cout << node << " ";
        que.push(node);
      }
    }
    //cout << endl;
  }
}

int main () {
  int n, m;
  cin >> n >> m;

  if(n == m) cout << 0 << endl;
  else if (n > m) cout << n-m << endl;
  else {
    adj_list.resize(2*m + 1);
    visited.resize(2*m + 1, false);

    for(int i=1; i<=2*m; i++) {
      if(i-1 != 0)
        adj_list[i].push_back(i-1);
      if(i*2 <= 2*m)
        adj_list[i].push_back(i*2);
    }

    bfs(n, m);

    /* for (int i = 0; i <= 2*m; i++) {
      cout << "v" << i << ": ";
      for(int j=0; j<adj_list[i].size(); j++) {
        cout << adj_list[i][j] << " ";
      }
      cout << endl;
    } */
  }
  
  
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, max, min, contador=0;
  cin >> n;
  vector<int> rank(n);

  for (int i = 0; i < n; i++) {
    cin >> rank[i];
    if(i == 0) {
      max=rank[0];
      min=rank[0];
    } else {
      if(rank[i] < min) {
      min = rank[i];
      contador++;
      }
      if(rank[i] > max) {
        max = rank[i];
        contador++;
      }
    }
  }
  
  cout << contador << "\n";
  
  return 0;
}
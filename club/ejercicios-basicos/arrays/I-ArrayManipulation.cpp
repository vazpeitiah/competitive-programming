#include <bits/stdc++.h>

using namespace std;


long arrayManipulation(int n, vector<vector<int>> queries) {
  vector<long> arr(n, 0);
  
  for (int i = 0; i < queries.size(); i++) {
    arr[queries[i][0] - 1] += queries[i][2];
    if(queries[i][1] < arr.size()) {
      arr[queries[i][1]]  -= queries[i][2];
    }
  }
  
  long max = 0, sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
    if(sum > max) {
      max = sum;
    }
  }
  
  return max;
}


int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> queries(m);

  for (int i = 0; i < m; i++) {
    queries[i].resize(3);
    for (int j = 0; j < 3; j++) {
      cin >> queries[i][j];
    }
  }
  
  long result = arrayManipulation(n, queries);
  cout << result << endl;
  
  return 0;
}
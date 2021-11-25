#include <bits/stdc++.h>

using namespace std;

int max_pieces(int n, vector<int> arr, int curr) {
  int max =curr, res;
  vector<int> maxAux(3);
  
  for (int i = 0; i < 3; i++) {
    res = n - arr[i];
    if(res == 0){
      continue;
    }
    if(res < arr[0]) {
      return curr-1;
    }
    maxAux[i] = max_pieces(res, arr, curr+1);
  }
  
  for (int i = 0; i < 3; i++) {
    if(maxAux[i] > max) {
      max = maxAux[i];
    }
  }
  return max;
}

int main() {
  int n;
  vector<int> arr(3);
  cin >> n;
  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }
  
  sort(arr.begin(), arr.end());

  int max = max_pieces(n, arr, 1);
  
  cout << max << "\n";
  
  return 0;
}
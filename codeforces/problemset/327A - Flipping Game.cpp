#include <bits/stdc++.h>

using namespace std;

int countOnes(vector<int> v) {
  int sum=0;

  for (int i = 0; i < v.size(); i++) {
    if(v[i] == 1) {
      sum++;
    }
  }

  return sum;
}

int main () {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }

  vector<int> aux;
  int  maxi = INT_MIN;

  for(int i=0; i<n; i++) {
    for(int j=i; j<n; j++) {
      aux.assign(a.begin(), a.end());
      for(int m=i; m<=j; m++) {
        aux[m] = 1 - aux[m];
      }
      maxi = max(maxi, countOnes(aux));
    }
  }

  cout << maxi << endl;
  
  return 0;
}
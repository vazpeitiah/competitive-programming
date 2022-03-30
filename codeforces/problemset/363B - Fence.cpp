#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  
  int sum=0;
  for (int i = 0; i < k; i++) {
    sum += a[i];
  }
  
  int st=0, end=k, msum=sum, midx=0;

  while(end < n) {
    sum = sum - a[st] + a[end];
    st++; end++;

    if(sum < msum) {
      msum = sum;
      midx = st;
    }
  }

  cout << midx+1 << endl;

  return 0;
}
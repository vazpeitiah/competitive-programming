#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }
  
  int ss=0, sd=0, l=0, r=arr.size()-1;
  bool s = true;

  while(l <= r) {
    if(arr[l] > arr[r]) {
      if(s) {
        ss+=arr[l];
      } else {
        sd+=arr[l];
      }
      l++;
    } else {
      if(s) {
        ss+=arr[r];
      } else {
        sd+=arr[r];
      }
      r--;
    }
    s = !s;
  }

  std::cout << ss << " " << sd << endl;
  return 0;
}
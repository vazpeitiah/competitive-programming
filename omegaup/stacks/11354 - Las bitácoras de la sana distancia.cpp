#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int N; cin >> N;
  vector<int> d(N);
  vector<string> p(N);
  for(int i=0; i<N; i++) cin >> d[i];
  for(int i=0; i<N; i++) cin >> p[i];
  stack<string> stk;
  
  int r=0, j=0;
  for(int i=0; i<N; i++) {
    stk.push(p[i]);
    if(r==0) {
      cout << stk.top() << endl;
      stk.pop();
      r = d[j];
      j++;
    }
    r--;
  }

  while(!stk.empty()) {
    cout << stk.top() << endl;
    stk.pop();
  } 
  
  return 0;
}
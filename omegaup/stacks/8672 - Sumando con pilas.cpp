#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int N, e, sum; 
  cin >> N;
  
  string op;
  stack<int> stk;

  for(int i=0; i<N; i++) {
    cin >> op;
    if(op == "AGREGA") {
      cin >> e;
      stk.push(e);
    } else if(op == "IMPRIME") {
      cout << stk.top() << endl;
    } else if(op == "CONSUME") {
      sum = stk.top();
      stk.pop();
      sum += stk.top();
      stk.pop();
      stk.push(sum);
    }
  }

  return 0;
}
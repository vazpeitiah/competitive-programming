#include <iostream>

using namespace std;

int isPrime(int n) {
  bool ans = true;
  for(int i=2; i<n && ans; i++){
    if(n%i == 0) {
      ans = false;
    }
  }

  return ans;
}

int main(){
  int n, m; cin >> n >> m;
  
  if(isPrime(m)) n++;
  while(!isPrime(n)) {
    n++;
  }

  cout << (n==m ? "YES" : "NO") << endl;
}

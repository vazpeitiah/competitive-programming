#include <bits/stdc++.h>

using namespace std;

int main () {
  int t;
  long long n;
  cin >> t;
  while(t--) {
    cin >> n;
    /* Si el numero no es potencia de 2, entonces si tiene divisores impares */
    while(n%2 == 0) {
      n /= 2;
    }

    if(n == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
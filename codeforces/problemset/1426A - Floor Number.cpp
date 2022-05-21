#include<iostream>
#include<math.h>

using namespace std;

int main() {
  int t; cin >> t;
  int n, x;
  while(t--) {
    cin >> n >> x;
    cout << (n <= 2 ? 1 : (n-3) / x + 2) << endl;
  }

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int t;
  string s;

  cin >> t;

  while(t--) {
    string aux;
    cin >> s;

    for(char c : s) {
      aux.push_back(tolower(c)); 
    }

    if(aux == "yes") {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
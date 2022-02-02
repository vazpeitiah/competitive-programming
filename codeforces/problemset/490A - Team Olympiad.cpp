#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, n1=0, n2=0, n3=0, aux;
  cin >> n;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> aux;
    a[i] = make_pair(aux, i+1);
    if(aux == 1) n1++;
    if(aux == 2) n2++;
    if(aux == 3) n3++;
  }
  
  sort(a.begin(), a.end());

  cout << min({n1, n2, n3}) << endl;

  //for (int i = 0; i < a.size(); i++) cout << a[i].first << " -> " << a[i].second << endl;

  for (int i = 0; i < min({n1, n2, n3}); i++) {
    int curr = 1;
    for (int j = 0; j < a.size(); j++) {
      if(a[j].first == curr && a[j].second != 0) {
        cout << a[j].second << " ";
        a[j].second = 0;
        curr++;
      }
    }
    cout << endl;
  }
  
  return 0;
}
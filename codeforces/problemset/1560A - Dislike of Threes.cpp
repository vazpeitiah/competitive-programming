  #include <bits/stdc++.h>
  
  using namespace std;
  
  int main () {
    int t, k;
    cin >> t;
    vector<int> a(1000+1);
    int cont = 1, i=1;
    while(cont <= 1000) {
      if(i % 3 != 0) {
        string s = to_string(i);
        if(s.at(s.size()-1) != '3') {
          a[cont] = i;
          cont++;
        }
      }
      i++;
    }


    while(t-- > 0) {
      cin >> k;
      cout << a[k] << endl;
    }
    return 0;
  }
#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> x(3);
    for (int i = 0; i < 3; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    cout << x[1] - x[0] + x[2] - x[1] << endl; 

    return 0;
}
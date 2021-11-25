#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n, k, ml, l, r, g, x, y;
    cin >> n >> k >> ml >> l >> r >> g >> x >> y;

    int v[3];

    v[0] = (k * ml) / x;
    v[1] = r * l;
    v[2] = g / y;

    sort(v, v+3);

    int resp = v[0] /n;

    cout << resp << endl;


    return 0;
}
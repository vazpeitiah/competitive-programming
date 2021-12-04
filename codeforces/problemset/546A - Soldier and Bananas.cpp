#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int res = (k * w * (w + 1) / 2) - n;
    if(res < 0) {
        cout << 0 << '\n';
    } else {
        cout << res << '\n';
    }
    return 0;
}

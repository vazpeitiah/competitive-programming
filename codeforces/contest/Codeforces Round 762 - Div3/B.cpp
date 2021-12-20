#include <bits/stdc++.h>

using namespace std;

int calc(long long n) {
    if(n <= 0) return 0;
    if(n == 1) return 1;
    int ans = 1;
    set<long long> m;
    long long j=2;
    while(pow(j, 2) <= n) {
        j++;
        if(m.find(pow(j, 2)) == m.end()) {
            ans++;
            m.insert(pow(j, 2));
        }
    }
    
    j=2;
    while(pow(j, 3) <= n) {
        j++;
        if(m.find(pow(j, 3)) == m.end()) {
            ans++;
            m.insert(pow(j, 3));
        }
    }
    
    return ans;
}

int main() {
    int t, n;
    cin >> t;
    
    while(t-- > 0) {
        cin >> n;
        cout << calc(n) << endl;
    }
    return 0;
}

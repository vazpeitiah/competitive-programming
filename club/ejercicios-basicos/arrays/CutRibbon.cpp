#include <bits/stdc++.h>

using namespace std;

int brute_force(int n, int a, int b, int c, int k, int level) {
    if(n == 0) {
        return level;
    } else if(n < k) {
        return -1;
    }

    int max = 0;
    int max_a =  brute_force(n-a, a, b, c, a, level+1);
    int max_b =  brute_force(n-b, a, b, c, b, level+1);
    int max_c =  brute_force(n-c, a, b, c, c, level+1);
    if(max_a > max) {
        max = max_a;
    }
    if(max_b > max) {
        max = max_b;
    }
    if(max_c > max) {
        max = max_c;
    }
    
    return max;

    
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int max_a = brute_force(n, a, b, c, a, 0);
    int max_b = brute_force(n, a, b, c, b, 0);
    int max_c = brute_force(n, a, b, c, c, 0);
    int max = 0;
    
   if(max_a > max) {
        max = max_a;
    }
    if(max_b > max) {
        max = max_b;
    }
    if(max_c > max) {
        max = max_c;
    }
    
    cout << max << "\n";
    
    return 0;
}
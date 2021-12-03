#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if(n <= 0) {
        return false;
    }
    
    bool ans = true;
    
    for (int i = 2; i<n && ans; i++) {
        if(n % i == 0) {
            ans = false;
        }
    }
    
    return ans;
}

vector<int> getNPrimes(int n) {
    vector<int> nPrimes(n, 0);
    int cont=2, i=0;
    
    while(i < n) {
        if(isPrime(cont)) {
            nPrimes[i] = cont;
            i++;
        }
        cont++;
    }
    
    return nPrimes;
}

int main() {
    int n, q, ni;
    cin >> n >> q;
    stack<int> A;
    vector<int> primes = getNPrimes(q);
    vector<int> ans;
    
    for (int i=0; i<n; i++) {
        cin >> ni;
        A.push(ni);
    }
    
    stack<int> Ai;    
    stack<int> Bi;
    
    for (int i=0; i<q; i++) {
        while(!A.empty()) {
            if(A.top() % primes[i] == 0) {
                Bi.push(A.top());
            } else {
                Ai.push(A.top());
            }
            A.pop();
        }
        while (!Bi.empty()) {
            ans.push_back(Bi.top());
            Bi.pop();
        }
        A = Ai;
        while (!Ai.empty()) Ai.pop();
    }
    
    while(!A.empty()) {
        ans.push_back(A.top());
        A.pop();
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << '\n';
    }
    
    return 0;
}

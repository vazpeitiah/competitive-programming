#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, min = 0;
    cin >> N;
    vector<int> billetes = {100, 20, 10, 5, 1};
    
    for (int i = 0; i < billetes.size() && N > 0; i++) {
        if(N >= billetes[i]) {
            min += N / billetes[i];
            N = N % billetes[i];
        }
    }
    
    std::cout << min << std::endl;
    return 0;
}
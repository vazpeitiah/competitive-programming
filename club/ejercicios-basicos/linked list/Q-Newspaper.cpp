#include <bits/stdc++.h>

using namespace std;

int main() {
    map<unsigned char, int> pc;
    int t;
    unsigned char c; int n, k;
    string str;
    int sum;
    cin >> t;
    while(t-- > 0) {
        sum = 0;
        pc.clear();
        cin >> k;
        while (k-- > 0) {
            cin >> c >> n;
            pc.insert(make_pair(c, n)); 
        }
        cin >> k;
        getline(cin , str);
        while (k-- > 0) {
            getline(cin , str);
            for (int i = 0; i < str.size(); i++) {
                //sum += pc[str.at(i)];
                if(pc.find(str.at(i)) != pc.end()) {
                    sum += pc.find(str.at(i))->second;
                }
            }
        }
        printf("%.2f$\n", sum/100.0);
    }
    return 0;
}

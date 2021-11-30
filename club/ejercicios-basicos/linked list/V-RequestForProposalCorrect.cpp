#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, p, r, curr_r, i, j, k;
    float d, curr_d;
    string toignore, name, curr_name;

    for(i = 1;; i++) {
        scanf("%d %d\n", &n, &p);
        if(n == 0 && p == 0) break;
        if(i > 1) printf("\n");

        for(j = 0; j < n; j++)
            getline(cin, toignore);

        curr_r = 0;
        curr_d = 9999999;
        for(j = 0; j < p; j++) {
            getline(cin, name);
            scanf("%f %d\n", &d, &r);

            for(k = 0; k < r; k++)
                getline(cin, toignore);

            if(r > curr_r) {
                curr_r = r;
                curr_name = name;
                curr_d = d;
            } else if(r == curr_r && d < curr_d) {
                curr_name = name;
                curr_d = d;
            }
        }
        cout<<"RFP #"<<i<<endl;
        cout<<curr_name<<endl;
    }
}
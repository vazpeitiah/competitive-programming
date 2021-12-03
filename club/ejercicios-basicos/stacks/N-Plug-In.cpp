#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s;
    stack<char> stk;
    
    cin >> s;
    
    for (int i = s.size() - 1; i >= 0; i--) {
        if(stk.empty() || stk.top() != s.at(i)) {
            stk.push(s.at(i));
        }  else {
            stk.pop();
        }
    }
    
    while(!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }
    cout << endl;
    
    return 0;
}
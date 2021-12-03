#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    vector<string> res;
    vector<string> dirnames;
    stack<string> stk;
    
    for (int i = 0; i < n; i++) {
        res.clear();
        dirnames.clear();
        input.clear();
        cin >> input;
        if(input == "pwd") {
            if(stk.empty()) {
                cout << "/" << '\n';
                continue;
            }
            stack<string> aux = stk;
            while(!aux.empty()) {
                res.push_back(aux.top());
                res.push_back("/");
                aux.pop();
            }
            reverse(res.begin(), res.end());
            
            for (int k = 0; k < res.size(); k++) {
                cout << res[k];
            }
            cout << "/\n";
        } else if(input == "cd")  {
            cin >> input;
            if(input[0] == '/') {
                while(!stk.empty()) stk.pop();
                input = input.substr(1, dirnames.size()-1);
            }
            
            int pos = 0;
            while(input.find("/", pos) != string::npos) {
                int index = input.find("/", pos);
                dirnames.push_back(input.substr(pos, index - pos));
                pos = index + 1;
            }
            if(input != "/")
                dirnames.push_back(input.substr(pos, input.size() - pos));
            
            for (int j = 0; j < dirnames.size(); j++) {
                if(dirnames[j] == "..") {
                    stk.pop();
                } else {
                    stk.push(dirnames[j]);
                }
            }
            
        }
    }
    
    return 0;
}
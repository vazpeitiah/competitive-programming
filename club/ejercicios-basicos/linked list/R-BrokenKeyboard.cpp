#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    
    while (getline(cin, line)) {
        string result = "";
        string aux = "";
        bool flag = false;
        for (int i = 0; i < line.size(); i++) {
            char c = line.at(i);
            if(line.at(i) != '[' && line.at(i) != ']') {
                if(!flag) {
                    result.push_back(c);
                }else {
                    aux.push_back(c);
                }
            } else if(line.at(i) == '[') {
                flag = true;
                if(aux != "") {
                    result = aux + result;
                    aux = "";
                }
            } else if(line.at(i) == ']') {
                flag = false;
                if(aux != "") {
                    result = aux + result;
                    aux = "";
                }
            }
        }
        if(aux != "") {
            result = aux + result;
            aux = "";
        }
        cout << result << "\n";
    }
    return 0;
}
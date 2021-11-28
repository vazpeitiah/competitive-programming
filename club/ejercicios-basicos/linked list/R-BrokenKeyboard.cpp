#include <bits/stdc++.h>

using namespace std;

int main() {
    string line, result, aux;
    bool inserFront;
    
    while (getline(cin, line)) {
        result = ""; aux = ""; inserFront = false;
        for (int i = 0; i < line.size(); i++) {
            char c = line.at(i);
            if(line.at(i) != '[' && line.at(i) != ']') {
                if(inserFront){
                    aux.push_back(c);
                }else {
                    result.push_back(c);
                }
            } else if(line.at(i) == '[') {
                inserFront = true;
                aux = "";
            } else if(line.at(i) == ']') {
                inserFront = false;
                result = aux + result;
            }
        }
        cout << result << "\n";
    }
    return 0;
}
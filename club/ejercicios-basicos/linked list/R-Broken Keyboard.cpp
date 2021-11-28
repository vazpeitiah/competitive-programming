#include <bits/stdc++.h>

using namespace std;


int main() {
    string line;
    string result = "";
    bool inserFront = false;
    
    while (getline(cin, line)) {
        for (int i = 0; i < line.size(); i++) {
            char c = line.at(i);
            if(line.at(i) != '[' && line.at(i) != ']') {
                if(inserFront){
                    result.insert(0, 1, c);
                }else {
                    result.push_back(c);
                }
            } else if(line.at(i) == '[') {
                inserFront = true;
            } else if(line.at(i) == ']') {
                inserFront = false;
            }
        }
        cout << result << "\n";
    }
    return 0;
}

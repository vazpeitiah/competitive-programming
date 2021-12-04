#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<int> letters(26, 0);
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        letters[str.at(i) - 'a']++;
    }
    
    for (int i = 0; i < letters.size(); i++) {
        //cout << letters[i] << '\n';
        if(letters[i] != 0) {
            count++;
        }
    }
    
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << '\n';
    } else {
        cout << "IGNORE HIM!" << '\n';
    }

    return 0;
}

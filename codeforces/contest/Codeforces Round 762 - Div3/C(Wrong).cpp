#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    string a, s;
    int l;
    string b;
    int pos =0;
    while(t-- >0) {
        cin >> a >> s;
        b.clear();
        reverse(s.begin(), s.end());
        //cout << "s: " << s << endl;
        pos=0;
        for (int i = a.size()-1; i >= 0; i--) {
            if(pos >= s.size()) {
                b="-1";
                break;
            }
            int ai = a.at(i) - '0';
            int si = stoi(s.substr(pos, 1));
            
            if(ai > si) {
                if(pos+1 >= s.size()) {
                    b="-1";
                    break;
                }
                string aux = s.substr(pos, 2);
                reverse(aux.begin(), aux.end());
                si = stoi(aux);
                pos++;
            }
            //cout << "ai: "<< ai << endl;
            //cout << "si: "<< si << endl;

            int res = si - ai;
            //cout << "res: " << res << endl;
            if(res <= 9) {
                b.push_back(res + '0');
            } else {
                b="-1";
                break;
            }
            pos++;
        }
        if(b!="-1") {
            while(pos < s.size ()) {
                b.push_back(s.at(pos));
                pos++;
            }
            reverse(b.begin(), b.end());
            cout << stoi(b) << endl;
        }else {
            cout << b << endl;
        }
    }

    return 0;
}

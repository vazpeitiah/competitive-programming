#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, cont = 1;
    set<string> req; // requisitos 
    vector<string> bus; // empresas
    vector<float> prices; // precios por empresa
    vector<int> creq; // requerimientos cumplidos por empresa
    vector<vector<string>> creqs;
    string str;
    vector<double> cumpl;
    double max;
    vector<pair<int, float>> postores;
    
    while(true) {
        cin >> n >> p;
        if(n == 0 && p == 0){
            break;
        }
        req.clear();

        getline(cin, str);
        
        for (int i = 0; i < n; i++) {
            getline(cin, str);
            req.insert(str);
        }
        max = 0;
        bus.clear();
        bus.resize(p);
        prices.clear();
        prices.resize(p);
        creq.clear();
        creq.resize(p);
        creqs.clear();
        creqs.resize(p);
        cumpl.clear();
        cumpl.resize(p);
        postores.clear();
        for (int i = 0; i < p; i++) {
            getline(cin, str);
            bus[i] = str;
            cin >> prices[i] >> creq[i];
            creqs[i].resize(creq[i]);
            getline(cin, str);
            for (int j = 0; j < creq[i]; j++) {
                getline(cin, str);
                creqs[i][j] = str;
            }
            cumpl[i] = (double) creq[i] / n;
            //cout << bus[i] << ": " <<cumpl[i] << "\n";
            if(cumpl[i] > max) {
                max = cumpl[i];
            }
        }
        
        float bestPrice = 3.40282e+038;
        
        for (int i = 0; i < p; i++) {
            if(cumpl[i] == max) {
                postores.push_back(make_pair(i, prices[i]));
                //cout << "postor: " << i << ", " << prices[i] << "\n";
                if(prices[i] < bestPrice) {
                    bestPrice = prices[i];
                }
            }
        }
        
        int index = 0;
        
        for (int i = 0; i < postores.size(); i++) {
            if(postores[i].second == bestPrice) {
                index = postores[i].first;
            }
        }
     
        if(cont == 1) {
            cout << "RFP #" << cont << "\n";
            cout << bus[index] << "\n";
        }else {
            cout << "\nRFP #" << cont << "\n";
            cout << bus[index] << "\n";
        }

        cont++;
    }
    return 0;
}
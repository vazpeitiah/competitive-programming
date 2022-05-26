#include <bits/stdc++.h>

using namespace std;

int main () {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	int t; cin >>t;
	int n, ai;
	while(t--) {
		cin >> n;
		unordered_set<int> s;
		for(int i=0; i<n*2; i++) {
			cin >> ai;
			if(s.find(ai) == s.end()) {
				cout << ai << " ";
				s.insert(ai);
			}
		}
		cout << endl;
	}
	
	return 0;
}
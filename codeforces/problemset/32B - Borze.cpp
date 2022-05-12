#include <bits/stdc++.h>

using namespace std;

int main () {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	string s; cin >> s;
	string ans;
	for(int i=0; i<s.size(); i++) {
		if(s.at(i) == '.') ans.push_back('0');
		else if(s.at(i) == '-') {
			i++;
			if(s.at(i) == '.') ans.push_back('1');
			else ans.push_back('2');
		}
	}

	cout << ans << endl;
	
	return 0;
}
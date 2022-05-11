#include <bits/stdc++.h>

using namespace std;

int main () {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	vector<int> a(4);
	for(int i=0; i<a.size(); i++) cin >> a[i];
	string s; cin >> s;
	int ans=0;
	for(char c: s) {
		ans += a[c - '0' - 1];
	}

	cout << ans << endl;
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int n; cin >> n;
	string s, s1, s2;
	int n1=0, n2=0;
	for(int i=0; i<n; i++) {
		cin >> s;
		if(i==0) {
			s1 = s;
			n1++;
		}
		if(s == s1) n1++;
		else {
			n2++;
			s2 = s;
		}
	}

	if(n1>n2) cout << s1 << endl;
	else cout << s2 << endl;

	return 0;
}
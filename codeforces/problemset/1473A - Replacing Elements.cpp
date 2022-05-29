#include <bits/stdc++.h>

using namespace std;

int main () {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t; cin >> t;
	int n, d;
	while(t--) {
		cin >> n >> d;
		vector<int> a(n);
		int c = 0;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			if(a[i] <= d) c++;
		}
		sort(a.begin(), a.end());

	if((c >= 2 && a[0] + a[1] <= d) || c==n) {
			cout << "YES" << endl;
		} else cout << "NO" << endl;
	}

	return 0;
}
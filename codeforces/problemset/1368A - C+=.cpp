#include <bits/stdc++.h>

using namespace std;

int main () {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t; cin >> t;
	int a, b, n, movs;
	while(t--) {
		cin >> a >> b >> n;
		movs=0;
		while(a <= n && b <= n) {
			movs ++;
			if(min(a, b) == a) {
				a += b;
			} else {
				b +=a;
			}
		}
		
		cout << movs << endl;
	}
	return 0;
}
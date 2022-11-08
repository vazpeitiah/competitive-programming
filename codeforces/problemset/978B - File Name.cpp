#include <iostream>

using namespace std;

int main() {
	int n;
	int ans=0;
	string s;
	cin >> n;
	cin >> s;
	int cx = 0;

	for(int i=0; i<n; i++) {
		if(s[i] != 'x') {
			cx = 0;
			continue;
		}

		if(cx == 2) {
			ans ++;
			continue;
		}
		cx ++;
	}

	cout << ans << endl;
	return 0;
}
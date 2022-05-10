#include <bits/stdc++.h>

using namespace std;

int main () {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	int c=0;
	while(a>=b) {
		c += b;
		a -= b;
		a++;
	}

	cout << c+a << endl;
	return 0;
}
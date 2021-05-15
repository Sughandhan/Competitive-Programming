#include<bits\stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, k1, k2;
		cin >> n >> k1 >> k2;
		int w, b, white, black;
		cin >> w >> b;
		white = k1 + k2;
		black = 2 * n - white;
		white /= 2;
		black /= 2;
		if ( black >= b && white >= w ) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
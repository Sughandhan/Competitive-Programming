#include<bits\stdc++.h>

using namespace std;

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n == 2) {
			cout << -1 << endl;
		}
		else {
			int count = 0;
			for (int i = 1; i <= n * n; i = i + 2) {
				count++;
				cout << i << " ";
				if (count % n == 0) {
					cout << endl;
				}
			}
			for (int i = 2; i <= n * n; i = i + 2) {
				count++;
				cout << i << " ";
				if (count % n == 0) {
					cout << endl;
				}
			}
		}
	}
	return 0;
}
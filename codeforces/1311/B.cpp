// BATMAN WAS HERE

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
		int n, m;
		cin >> n >> m;
		vector<int> a(n), p(m);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> p[i];
		}
		int flag = 0;
		for (int k = 0; k < n; k++) {
			for (int i = 0; i < n - 1; i++) {
				if (a[i] > a[i + 1]) {
					int l = i + 1;
					vector<int> ::iterator it;
					it = find(p.begin(), p.end(), l);
					if (it == p.end()) {
						cout << "NO" << endl;
						flag = 1;
						break;
					}
					else {
						swap(a[i], a[i + 1]);
					}
				}
			}
			if (flag == 1) {
				break;
			}
		}
		if (flag == 1) {
			continue;
		}
		cout << "YES" << endl;
	}
	return 0;
}
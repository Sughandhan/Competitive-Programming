// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char a = 'W', b = 'B';
	long long n, m;
	cin >> n >> m;
	vector<vector<char>> v(n);
	for (long i = 0; i < n; i++) {
		v[i] = vector<char> (m);
	}
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < m; j++) {
			if (v[i][j] == '-') {
				continue;
			}
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					v[i][j] = a;
				}
				else {
					v[i][j] = b;
				}
			}
			else {
				if (j % 2 == 0) {
					v[i][j] = b;
				}
				else {
					v[i][j] = a;
				}
			}
		}
	}
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < m; j++) {
			cout << v[i][j];
		}
		cout << endl;
	}
	return 0;
}
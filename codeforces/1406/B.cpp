// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int t;
	cin >> t;
	while (t--) {
		long long int n, idx = 0, res1 = -9223372036854775807, res2 = -9223372036854775807, res3 = -9223372036854775807, neg = 0, pos = 0;
		cin >> n;
		vector<long long int> v(n);
		for (long long int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] >= 0) {
				pos++;
			}
			else {
				neg++;
			}
		}
		sort(v.begin(), v.end());
		for (long long int i = 0; i < n; i++) {
			if (v[i] >= 0) {
				idx = i;
				break;
			}
		}
		if (neg >= 4) {
			res1 = 1;
			for (long long int i = 0; i < 4; i++) {
				res1 *= v[i];
			}
			if (v[n - 1] > 0) {
				res1 *= v[n - 1];
			}
			else {
				res1 = -9223372036854775807;
			}
		}
		if (neg >= 2) {
			res2 = 1;
			for (long long int i = 0; i < 2; i++) {
				res2 *= v[i];
			}
			if (pos >= 3) {
				for (long long int i = 0; i < 3; i++) {
					res2 *= v[n - 1 - i];
				}
			}
			else {
				res2 = -9223372036854775807;
			}
		}
		res3 = 1;
		for (long long int i = 0; i < 5; i++) {
			res3 *= v[n - 1 - i];
		}
		//cout << "res1 " << res1 << " res2 " << res2 << " res3 " << res3 << endl;
		cout << max({res1, res2, res3}) << endl;
	}
	return 0;
}
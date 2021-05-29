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
		long long n;
		cin >> n;
		vector<long long> v(n), res(n);
		for (long long i = 0; i < n; i++) {
			cin >> v[i];
		}
		for ( long long i = n - 1; i >= 0; i--) {
			if (i + v[i] < n) {
				res[i] += res[i + v[i]] + v[i] ;
			}
			else {
				res[i] += v[i];
			}
		}
		sort(res.begin(), res.end(), greater<int>());
		cout << res[0] << endl;
	}
	return 0;
}
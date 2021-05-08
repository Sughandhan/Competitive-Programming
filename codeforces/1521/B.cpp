#include<bits\stdc++.h>

using namespace std;

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	long long int t;
	cin >> t;
	while (t--) {
		long long int n, min_idx, mini = INT_MAX;
		cin >> n;
		vector<long long int> v(n);
		for (long long int i = 0; i < n ; i++) {
			cin >> v[i];
			if (v[i] < mini) {
				mini = v[i];
				min_idx = i;
			}
		}
		// long long int cur = mini + 1;
		// for (long long int i = min_idx - 1; i >= 0 ; i--) {
		// 	v[i] = cur;
		// 	cur++;
		// }
		// cur = mini + 1;
		// for (long long int i = min_idx + 1; i < n ; i++) {
		// 	v[i] = cur;
		// 	cur++;
		// }
		cout << n - 1 << endl;
		for (long long int i = 0; i < n ; i++) {
			if ( i == min_idx)
				continue;
			cout << min_idx + 1 << " " << i + 1 << " " << mini << " " << mini + abs(i - min_idx) << endl;
		}
	}
	return 0;
}
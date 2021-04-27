#include<bits/stdc++.h>

using namespace std;

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		vector< long long int> vi, vf;
		for (long long int i = 0; i < n; i++) {
			long long int x;
			cin >> x;
			vi.push_back(x);
		}
		sort(vi.begin(), vi.end());

		for (long long int i = n / 2; i < n; i++) {
			if (n - 1 - i == i) {
				vf.push_back(vi[i]);
				//break;
			}
			else {
				vf.push_back(vi[n - i - 1]);
				vf.push_back(vi[i]);
			}
		}
		for (long long int i = 0; i < n; i++) {
			cout << vf[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
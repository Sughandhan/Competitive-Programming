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
		vector<long long> v(n);
		for (long long i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end(), greater<int>());
		long long glo_res = 0;
		for (long long i = 0; i < n; i++) {
			if (i % 2 == 0) {
				if (v[i] % 2 == 0) {
					glo_res += v[i];
				}
			}
			else {
				if (v[i] % 2 != 0) {
					glo_res -= v[i];
				}
			}
		}
		if (glo_res > 0) {
			cout << "Alice" << endl;
		}
		else if (glo_res < 0) {
			cout << "Bob" << endl;
		}
		else {
			cout << "Tie" << endl;
		}
	}
	return 0;
}
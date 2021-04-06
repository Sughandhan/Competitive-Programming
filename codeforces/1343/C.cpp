#include<bits/stdc++.h>

using namespace std;

int sign(long long int x) {
	if (x > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	long long int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		vector< long long int> v, s;
		for (long long int i = 0; i < n; i++) {
			long long int x;
			cin >> x;
			v.push_back(x);
		}
		long long int sum = 0, flag = 0;
		for (long long int i = 0; i < n; i++) {
			long long int current = v[i], j = i;
			while (j < n && sign(v[i]) == sign(v[j])) {
				current = max( current, v[j]);
				j++;
			}
			sum += current;
			i = j - 1;
		}
		cout << sum << endl;
	}
	return 0;
}
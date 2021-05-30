// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n, k, count = 0, len = 0, flag = 0;
	cin >> n >> k;
	vector<char> v(n), alpha(k);
	for (long long i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (long long i = 0; i < k; i++) {
		cin >> alpha[i];
	}
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < k; j++) {
			if (v[i] == alpha[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			count += (len * (len + 1)) / 2;
			len = 0;
			flag = 0;
		}
		else {
			len++;
			flag = 0;
		}
	}
	count += (len * (len + 1)) / 2;
	cout << count;
	return 0;
}
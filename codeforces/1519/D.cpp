#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n;
	cin >> n;
	vector<long long int> a(n), b(n);
	long long int sum = 0, max_sum;
	for (long long int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (long long int i = 0; i < n; i++) {
		cin >> b[i];
		sum += a[i] * b[i];
	}
	max_sum = sum;
	for (long long int i = 0; i < n; i++) {
		long long int loc_sum = sum;
		long long int l = i - 1, r = i + 1;
		while (l >= 0 && r <= n - 1) {
			loc_sum -= (a[l] * b[l] + a[r] * b[r]);
			loc_sum += (a[l] * b[r] + a[r] * b[l]);
			max_sum = max(loc_sum, max_sum);
			l--;
			r++;
		}
	}
	for (long long int i = 0; i < n; i++) {
		long long int loc_sum = sum;
		long long int l = i, r = i + 1;
		while (l >= 0 && r <= n - 1) {
			loc_sum -= (a[l] * b[l] + a[r] * b[r]);
			loc_sum += (a[l] * b[r] + a[r] * b[l]);
			max_sum = max(loc_sum, max_sum);
			l--;
			r++;
		}
	}
	cout << max_sum;
	return 0;
}
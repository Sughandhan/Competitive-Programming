#include<bits\stdc++.h>

using namespace std;

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	long long a, r;
	cin >> a;
	while (a / 10 > 0) {
		long long n = a, sum = 0;
		while (n > 0) {
			sum += n % 10;
			n = n / 10;
		}
		a = sum;
	}
	cout << a;
	return 0;
}
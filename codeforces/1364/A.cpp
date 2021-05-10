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
		long long int n, x, idxf =-1, idxr=-1, ansf = -1, ansr = -1;
		cin >> n >> x;
		vector<long long int> v(n), f(n), r(n);
		cin >> v[0];
		f[0] = v[0];
		for (long long int i = 1; i < n ; i++) {
			cin >> v[i];
			f[i] = v[i] + f[i - 1];
		}
		r[n-1] = v[n-1];
		for (long long int i = 1; i < n ; i++) {
			r[n-1-i] = v[n-i-1] + r[n-i]; 
		}
		for (long long int i = 0; i < n ; i++) {
			if (f[i] % x != 0) {
			    idxf = i+1;
				ansf = i+1;
			}
		}
		for (long long int i = n - 1; i >= 0 ; i--) {
			if (r[i] % x != 0) {
			    idxr = n-i;
				ansr = n-i;
			}
		}
		cout << max(ansr, ansf) << endl;
	}
	return 0;
}
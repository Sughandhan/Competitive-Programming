#include <bits/stdc++.h>
 
using namespace std;
 
 
void solution() {
 
	int n, k;
	cin >> n >> k;
 
	vector <int> A(n);
	set <int> S;
	for(int i = 0; i < n; ++i) {
		cin >> A[i];
	}
	int ans = 1;
	for(int i = 0; i < n; ++i) {
		int x = A[i];
		int cnt = 0;
		int num = 1;
		while ((x&1) == 0) {
			x >>= 1;
			cnt++;
		}
		if (cnt&1) num <<= 1;
 
		for(int j = 3; j*j <= x; j += 2) {
			cnt = 0;
			while (x%j == 0) {
				cnt++;
				x /= j;
			}
			if (cnt&1) num *= j;
		}
		if (x > 1) num *= x;
		if (S.find(num) != S.end()) {
			ans++;
			while (!S.empty()) S.erase(S.begin());
		}
		S.insert(num);
	}
 
	cout << ans << '\n';
 
	A.clear();
	S.clear();
 
	return ;
}
 
int main(int argc, char *argv[]) {
 
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int t = 1;
	cin >> t;
 
	while (t--) {
		solution();
	}
 
 
 
	return 0;
}
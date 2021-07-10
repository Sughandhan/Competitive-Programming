// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define fr(i,a,b) for(int i=a;i<b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define N 100005


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	// cout << 20 << endl;
	ll t;
	cin >> t;
	while (t--) {
		ll k, n, m;
		cin >> k >> n >> m;
		vector<ll> a(n), b(m), ans;
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (ll i = 0; i < m; i++) {
			cin >> b[i];
		}
		ll i1 = 0, i2 = 0;
		while (i1 < n && i2 < m) {
			if (a[i1] < b[i2]) {
				ans.push_back(a[i1]);
				i1++;
			}
			else {
				ans.push_back(b[i2]);
				i2++;
			}
		}
		while (i1 < n) {
			ans.push_back(a[i1]);
			i1++;
		}
		while (i2 < m) {
			ans.push_back(b[i2]);
			i2++;
		}
		ll flag = 0;
		for (ll i = 0; i < n + m; i++) {
			if (ans[i] == 0) {
				k++;
			}
			else if (ans[i] > k) {
				flag = 1;
			}
		}
		if (flag == 1) {
			cout << -1 << endl;
		}
		else {
			for (ll i = 0; i < n + m; i++) {
				cout << ans[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll n, m, ans = 0, max = 0;
	cin >> n >> m;
	vector<ll> a(n), t(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> t[i];
		if (t[i] == 1) {
			ans += a[i];
			a[i] = 0;
		}
	}
	for (ll i = 1; i < n; i++) {
		a[i] += a[i - 1];
	}
	max = a[m - 1];
	for (ll i = 0; i + m < n; i++) {
		ll res = a[i + m] - a[i];
		if (max < res) {
			max = res;
		}
		//cout << res << " " << endl;
	}
	cout << ans + max;
	return 0;
}
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
	// cout << 69;
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll c = 0, colour = 1;
		map<ll, ll> mp;
		vector<ll> v(n), ans(n);
		vector<pair<ll, ll>> p;
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
			p.push_back(make_pair(v[i], i));
		}
		sort(all(p));
		sort(all(v));
		for (ll i = 0; i < n; i++) {
			if (mp[v[i]] <= k - 1) {
				c++;
				mp[p[i].first]++;
				ans[p[i].second] = colour;
				// ans[i] = colour;
				colour++;
				if (colour > k) {
					colour = 1;
				}
			}
			else {
				ans[p[i].second] = 0;
			}
		}
		// for (ll i = 0; i < n; i++) {
		// 	cout << v[i] << " " << p[i].first << endl;
		// }
		if (colour != 1) {
			colour--;
			ll idx = n - 1;
			while (colour > 0) {
				if (ans[p[idx].second] != 0) {
					ans[p[idx].second] = 0;
					colour--;
				}
				idx--;
			}
		}
		if (c < k) {
			for (ll i = 0; i < n; i++) {
				cout << 0 << " ";
			}
			cout << "\n";
		}
		else {
			for (ll i = 0; i < n; i++) {
				cout << ans[i] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}

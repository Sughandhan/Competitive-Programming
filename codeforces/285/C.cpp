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
	ll t = 1;
	// cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> v(n), seq(n);
		fr(i, 0, n) {
			cin >> v[i];
		}
		sort(all(v));
		fr(i, 0, n) {
			seq[i] = i + 1;
		}
		ll ans = 0;
		for (ll i = 0; i < n; i++) {
			ans += abs(seq[i] - v[i]);
		}
		cout << ans << "\n";
	}
	return 0;
}


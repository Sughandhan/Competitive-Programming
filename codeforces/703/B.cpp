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
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n), cap(k);
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	map<ll, ll> mp;
	for (ll i = 0; i < k; i++) {
		cin >> cap[i];
		mp[cap[i]] = 1;
	}

	ll minus = 0, ans = 0;
	for (ll i = 0; i < n - 1; i++) {
		if (mp[i + 1] == 0 && mp[i + 2] == 0) {
			ans += (v[i] * v[i + 1]);
			// cout << i << endl;
			// cout << ans << endl;
		}
	}
	if (mp[1] == 0 && mp[n] == 0) {
		ans += (v[0] * v[n - 1]);
	}
	for (ll i = 0; i < k; i++) {
		minus += v[cap[i] - 1];
		ans += (v[cap[i] - 1] * (sum - minus));
	}
	cout << ans;
	return 0;
}

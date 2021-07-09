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
	vector<ll> v(n);
	ll maxi = INT_MIN, mini = INT_MAX;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] > maxi) {
			maxi = v[i];
		}
		if (v[i] < mini) {
			mini = v[i];
		}
	}
	if (mini + k < maxi) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		vector<vector<ll>> ans(n);
		for (ll i = 0; i < n; i++) {
			ll id = 0;
			for (ll j = 0; j < v[i]; j++) {
				ll add = id % k + 1;
				ans[i].pb(add);
				id++;
			}
		}
		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < v[i]; j++) {
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

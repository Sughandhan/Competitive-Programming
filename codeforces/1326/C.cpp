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
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n), val(n), decoy(n), idx(k);
	map<ll, ll> mp;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		decoy[i] = v[i];
		mp[v[i]] = i;
	}
	sort(all(decoy), greater<ll>());
	ll par_val = 0;
	for (ll i = 0; i < k; i++) {
		par_val += decoy[i];
	}
	for (ll i = 0; i < k; i++) {
		idx[i] = mp[decoy[i]];
	}
	sort(all(idx));
	ll pars = 1;
	for (ll i = 1; i < k; i++) {
		pars = (pars * (idx[i] - idx[i - 1])) % 998244353;
	}
	cout << par_val << " " << pars;
	return 0;
}

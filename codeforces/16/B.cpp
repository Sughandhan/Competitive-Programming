// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll n, m;
	cin >> n >> m;
	vector<pair<ll, ll>> v(m);
	for (ll i = 0; i < m; i++) {
		ll a, b;
		cin >> a >> b;
		v[i].first = b;
		v[i].second = a;
	}
	sort(all(v));
	ll x = m - 1, ans = 0;
	while (n > 0 && x >= 0) {
		ll mini = min(v[x].second, n);
		n = n - mini;
		ans += mini * v[x].first;
		x--;
	}
	cout << ans;
	return 0;
}
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


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		vector<ll> v(n), c(m);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (ll i = 0; i < m; i++) {
			cin >> c[i];
		}
		sort(all(v), greater<int>());
		ll cost = 0, id = 0;
		for (ll i = 0; i < n; i++) {
			if (c[id] < c[v[i] - 1]) {
				cost += c[id];
				id++;
			}
			else {
				cost += c[v[i] - 1];
			}
		}
		cout << cost << "\n";
	}
	return 0;
}
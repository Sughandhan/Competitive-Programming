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

ll money;
vector<ll> v(N,0);
vector<ll> vis(N,0);
vector<vector<ll>> adj(N);


void dfs(ll i) {
	vis[i] = 1;
	money = min(money, v[i]);
	for (auto j: adj[i]) {
		if (!vis[j]) {
			dfs(j);
		}
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll n, m;
	cin >> n >> m;
	ll cost = 0;
	for ( ll i = 1; i <=n; i++) {
		cin >> v[i];
	}
	for (ll i = 1; i <=m; i++) {
		ll x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (ll i = 1; i <=n; i++) {
		if (vis[i] == 0) {
			money = 1e9;
			dfs(i);
			cost += money;
		}
	}
	cout << cost;
	return 0;
}
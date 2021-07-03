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
	ll n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	ll ans = 0;
	map<char, ll> vis, mp;
	for (ll i = 0; i < n; i++) {
		if (vis[s[i]] == 0) {
			vis[s[i]] = 1;
			mp[s[i]] = s[i] - 'a' + 1;
		}
	}
	vector<ll> dp(n + 1);
	dp[0] = 0;
	dp[1] = mp[s[0]];
	for (ll i = 2; i <= n; i++) {
		dp[i] = dp[i - 1];
		dp[i] += mp[s[i - 1]];
	}
	for (ll i = 0; i < q; i++) {
		ll x, y;
		cin >> x >> y;
		cout << dp[y] - dp[x - 1] << endl;
	}
	return 0;
}
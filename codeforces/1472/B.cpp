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
	ll t = 1;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector< ll> dp(2), v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(all(v), greater<ll>());
		for (ll i = 0; i < n; i++) {
			ll x = v[i];
			if (dp[0] > dp[1]) {
				dp[1] += x;
			}
			else {
				dp[0] += x;
			}
		}
		if (dp[1] != dp[0]) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;
}
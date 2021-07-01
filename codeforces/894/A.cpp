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
	// cin >> t;
	while (t--) {
		string s;
		cin >> s;
		vector<char> c;
		ll n  = s.size();
		ll ans = 0;
		vector<ll> dp(2);
		for (ll i = 0; i < n; i++) {
			if (s[i] == 'Q') {
				dp[0]++;
				ans += dp[1];
			}
			else if (s[i] == 'A') {
				dp[1] += dp[0];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
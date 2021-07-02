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
		vector<ll> v(n), dp(n + n + 4);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
			dp[v[i]]++;
		}
		set<ll> s(all(v));
		ll ans = s.size();
		vector<ll> arr(all(s));
		// for (ll i = 0; i < arr.size(); i++) {
		// 	cout << arr[i] << " " << dp[arr[i]] << endl;
		// }
		for (ll i = 0; i < arr.size(); i++) {
			//cout << arr[i] << " " << dp[arr[i]] << endl;
			if (dp[arr[i]] > 1) {
				if (dp[arr[i] + 1] == 0) {
					//cout << "lol " << arr[i] << endl;
					ans++;
					dp[arr[i] + 1] += dp[arr[i]] - 1;
					dp[arr[i]] = 1;
				}
				else {
					dp[arr[i] + 1] += dp[arr[i]] - 1;
					dp[arr[i]] = 1;
				}
			}
		}
		cout << ans << endl;

	}
	return 0;
}
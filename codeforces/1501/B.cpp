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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> v(n), dp(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		ll maxi = 0;
		for (ll i = n - 1; i >= 0; i--) {
			maxi = max(maxi, v[i]);
			if (maxi > 0) {
				dp[i] = 1;
			}
			maxi--;
		}
		for (ll i = 0; i < n; i++) {
			cout << dp[i] << " ";
		}
		cout << endl;
	}
}

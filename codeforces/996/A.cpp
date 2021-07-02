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
		ll n;
		cin >> n;
		vector< ll> dp(6), num(6);
		num[1] = 100;
		num[2] = 20;
		num[3] = 10;
		num[4] = 5;
		num[5] = 1;
		for (ll i = 1; i <= 5; i++) {
			dp[i] += dp[i - 1];
			dp[i] += n / num[i];
			n = n % num[i];
		}
		cout << dp[5];
	}
	return 0;
}
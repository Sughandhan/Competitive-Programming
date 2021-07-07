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
		vector<ll> v(n);
		ll sum = 0;
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
			sum += v[i];
		}
		if (sum > n) {
			if (sum % n == 0) {
				cout << 0 << "\n";
			}
			else {
				ll val = sum / n, rem = sum % n;
				ll ans = (rem) * (n - rem);
				cout << ans << "\n";
			}
		}
		else if (sum < n) {
			ll val = sum / n, rem = sum % n;
			ll ans = (val + rem) * (n - rem);
			cout << ans << "\n";
		}
		else {
			cout << 0 << "\n";
		}

	}
	return 0;
}
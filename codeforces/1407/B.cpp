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
		ll n;
		cin >> n;
		vector<ll> v(n), ans(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		ans[0] = *max_element(all(v));
		v[max_element(all(v)) - v.begin()] = 0;
		ll gcd = ans[0];
		for (ll i = 1; i < n; i++) {
			ll num = 0, idx = 0, max = 0;
			for (ll j = 0; j < n; j++) {
				if (__gcd(gcd, v[j]) >= max && v[j] != 0) {
					max = __gcd(gcd, v[j]);
					num = v[j];
					idx = j;
				}
			}
			ans[i] = num;
			gcd = max;
			v[idx] = 0;
		}
		for (ll i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}

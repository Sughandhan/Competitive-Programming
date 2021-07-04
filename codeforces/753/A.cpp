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
		ll x = 1;
		vector<ll> v;
		if (n == 1) {
			cout << 1 << "\n";
			cout << 1;
		}
		else {
			for (x; x <= n; x++) {
				if ((x * (x + 1)) / 2  >  n) {
					x = x - 1;
					break;
				}
			}
			ll val = 1;
			for (ll i = 0; i < x; i++) {
				v.pb(val);
				val++;
			}
			ll sum = accumulate(all(v), (ll)0);
			v[x - 1] += (n - sum);
			cout << v.size() << "\n";
			for (ll i = 0; i < x; i++) {
				cout << v[i] << " ";
			}
		}
	}
}

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
		vector<ll> v(n), idx(2 * n + 1);
		for (ll i = 0; i < 2 * n + 1; i++) {
			idx[i] = 1e6;
		}
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
			idx[v[i]] = i + 1;
		}
		ll c = 0, mini = 3, maxi = 2 * n - 1;
		for (ll i = mini; i <= maxi; i++) {
			ll root  = sqrt(i);
			for (ll j = 1; j <= root; j++) {
				if (j * j != i && i % j == 0 ) {
					if (idx[j] + idx[i / j] == i) {
						c++;
					}
				}
			}
		}
		cout << c << "\n";
	}
	return 0;
}
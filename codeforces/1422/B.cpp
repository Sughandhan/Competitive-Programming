// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define mp make_pair
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
		ll n, m;
		cin >> n >> m;
		vector<vector<ll>> v(n, vector<ll> (m));
		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < m; j++) {
				cin >> v[i][j];
			}
		}
		ll count = 0;
		for (ll i = 0; i < n / 2; i++) {
			for (ll j = 0; j < m / 2; j++) {
				ll a, b, c, d;
				a = v[i][j];
				b = v[n - 1 - i][j];
				c = v[i][m - j - 1];
				d = v[n - 1 - i][m - j - 1];
				ll s1, s2, s3, s4;
				s1 = abs(b - a) + abs(c - a) + abs(d - a);
				s2 = abs(a - b) + abs(c - b) + abs(d - b);
				s3 = abs(a - c) + abs(b - c) + abs(d - c);
				s4 = abs(a - d) + abs(b - d) + abs(c - d);
				count += min({s1, s2, s3, s4});
			}
		}
		if (n % 2 != 0) {
			for (ll i = 0; i < m / 2; i++) {
				count += abs(v[n / 2][i] - v[n / 2][m - i - 1]);
			}
		}
		if (m % 2 != 0) {
			for (ll i = 0; i < n / 2; i++) {
				count += abs(v[i][m / 2] - v[n - i - 1][m / 2]);
			}
		}
		cout << count << '\n';
	}
	return 0;
}
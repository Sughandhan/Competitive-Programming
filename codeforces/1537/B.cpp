// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;++i)
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
		ll n, m , i, j;
		cin >> n >> m >> i >> j;
		ll d1, d2, d3, d4;
		vector < pair < ll, pair<ll, ll>>> v;
		d1 = abs(1 - i) + abs(1 - j);
		// v[0].first = d1;
		// v[0].second.first = 1;
		// v[0].second.second = 1;

		v.pb(make_pair(d1, make_pair(1, 1)));

		d2 = abs(1 - i) + abs(m - j);
		// v[1].first = d2;
		// v[1].second.first = 1;
		// v[1].second.second = m;
		v.pb(make_pair(d2, make_pair(1, m)));

		d3 = abs(n - i) + abs(1 - j);
		// v[2].first = d3;
		// v[2].second.first = n;
		// v[2].second.second = 1;
		v.pb(make_pair(d3, make_pair(n, 1)));

		d4 = abs(n - i) + abs(m - j);
		// v[3].first = d4;
		// v[3].second.first = n;
		// v[3].second.second = m;
		v.pb(make_pair(d4, make_pair(n, m)));
		sort(all(v));
		// if (n == 1 || m == 1) {
		// 	cout << v[3].second.first << " " << v[3].second.second << " " << v[1].second.first << " " << v[1].second.second << '\n';
		// }
		// else {
		// 	cout << v[3].second.first << " " << v[3].second.second << " " << v[2].second.first << " " << v[2].second.second << '\n';
		// }
		cout << v[3].second.first << " " << v[3].second.second << " ";
		
		ll x = v[3].second.first, y = v[3].second.second;
		vector < pair < ll, pair<ll, ll>>> vi;
		d1 = abs(1 - x) + abs(1 - y);
		// v[0].first = d1;
		// v[0].second.first = 1;
		// v[0].second.second = 1;

		vi.pb(make_pair(d1, make_pair(1, 1)));

		d2 = abs(1 - x) + abs(m - y);
		// v[1].first = d2;
		// v[1].second.first = 1;
		// v[1].second.second = m;
		vi.pb(make_pair(d2, make_pair(1, m)));

		d3 = abs(n - x) + abs(1 - y);
		// v[2].first = d3;
		// v[2].second.first = n;
		// v[2].second.second = 1;
		vi.pb(make_pair(d3, make_pair(n, 1)));

		d4 = abs(n - x) + abs(m - y);

		vi.pb(make_pair(d4, make_pair(n, m)));
		sort(all(vi));
		cout << vi[3].second.first << " " << vi[3].second.second << '\n';


	}
	return 0;
}
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
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll t;
	cin >> t;
	while (t--) {
		ll n, c = 0, sum = 0;
		cin >> n;
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		if (n == 1) {
			cout << v[0] << endl;
			continue;
		}
		ll res = 0;
		if (v[0] > v[1]) {
			res += (v[0] - v[1]);
			v[0] = v[1];
		}
		for (ll i = 1; i < n - 1; i++) {
			if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
				res += v[i] - max(v[i - 1], v[i + 1]);
				v[i] = max(v[i - 1], v[i + 1]);
			}
		}
		if (v[n - 1] > v[n - 2]) {
			res += (v[n - 1] - v[n - 2]);
			v[n-1] = v[n-2];
		}
		for(ll i=1;i<n;i++){
		    res+= abs(v[i] - v[i-1]);
		}
		res += v[0] + v[n - 1];
		cout << res << endl;
	}
	return 0;
}
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
		ll n, x;
		cin >> n >> x;
		vector<ll> v(n);
		map<ll, ll> mp;
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
			mp[v[i]] = 1;
		}
		ll moves = 0;
		sort(all(v), greater<ll>());
		if (mp[x] == 1) {
			//cout << "lol1" << endl;
			moves++;
		}
		else if (v[0] > x) {
			//cout << "lol2" << endl;
			moves = 2;
		}
		else {
			moves = ceil(x / (double)v[0]);
		}
		cout << moves << '\n';

	}
	return 0;
}
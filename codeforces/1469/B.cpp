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
		vector<ll> r(n);
		for (ll i = 0; i < n; i++) {
			cin >> r[i];
		}
		ll m;
		cin >> m;
		vector<ll> b(m);
		for (ll i = 0; i < m; i++) {
			cin >> b[i];
		}
		ll s1 = 0, cur_s1 = 0, s2 = 0, cur_s2 = 0;
		for (ll i = 0; i < n; i++) {
			cur_s1 += r[i];
			s1 = max(s1, cur_s1);
		}
		for (ll i = 0; i < m; i++) {
			cur_s2 += b[i];
			s2 = max(s2, cur_s2);
		}
		cout << max(0LL, s1 + s2) << "\n";
	}
	return 0;
}
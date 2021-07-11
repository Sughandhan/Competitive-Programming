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
		vector<ll> v(n), ans;
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		ans.push_back(0);
		for (ll i = 1; i < n; i++) {
			ll num = (v[i] | v[i - 1]);
			ans.push_back((num ^ v[i]));
			v[i] = ((num ^ v[i]) | v[i]);
		}
		for (ll i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}

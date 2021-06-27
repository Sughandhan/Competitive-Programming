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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n), idx(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (ll i = 1; i < n - 1; i++) {
			if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
				idx[i] = 1;
			}
		}
		for (ll i = 1; i < n; i++) {
			idx[i] += idx[i - 1];
		}
		// for (ll i = 0; i < n; i++) {
		// 	cout << idx[i] << endl;
		// }
		ll peak = 0, index = 0;
		for (ll i = 0; i + k - 1 < n; i++) {
			ll temp = idx[i + k - 1] - idx[i];
			if (idx[i + k - 1] != idx[i + k - 2]) {
				temp--;
			}
			// cout << i + k - 1 << " " << i << endl;
			if (temp > peak) {
				peak = temp;
				index = i;
			}
		}
		cout << peak + 1 << " " << index + 1 << '\n';
	}
	return 0;
}

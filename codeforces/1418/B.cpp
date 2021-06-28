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
		vector<ll> v(n), lock(n), pos, neg;
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (ll i = 0; i < n; i++) {
			cin >> lock[i];
			if (lock[i] == 0) {
				if (v[i] > 0) {
					pos.pb(v[i]);
				}
				else {
					neg.pb(v[i]);
				}
			}
		}
		sort(all(pos), greater<ll>());
		sort(all(neg), greater<ll>());
		if (pos.size() > 0) {
			ll id1 = 0;
			for (ll i = 0; i < n; i++) {
				if (id1 == pos.size()) {
					break;
				}
				if (lock[i] == 0) {
					v[i] = pos[id1];
					lock[i] = 1;
					id1++;
				}
			}
		}
		if (neg.size() > 0) {
			ll id2 = 0;
			for (ll i = 0; i < n; i++) {
				if (id2 == neg.size()) {
					break;
				}
				if (lock[i] == 0) {
					v[i] = neg[id2];
					//cout << neg[id2];
					id2++;
					//cout << endl;
				}
			}
		}
		for (ll i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}

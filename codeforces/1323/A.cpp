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
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		if (n == 1) {
			if (v[0] % 2 == 0) {
				cout << 1 << endl;
				cout << 1 << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else {
			ll idx = -1;
			for (ll i = 0; i < n; i++) {
				if (v[i] % 2 == 0) {
					idx = i + 1;
					break;
				}
			}
			if (idx == -1) {
				cout << 2 << endl;
				cout << 1 << " " << 2 << endl;
			}
			else {
				cout << 1 << endl;
				cout << idx << endl;
			}
		}

	}
	return 0;
}
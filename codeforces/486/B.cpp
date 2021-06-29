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
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> b(n, vector<ll>(m, 0)), a(n, vector<ll>(m, 1)), c(n, vector<ll>(m, 0)) ;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> b[i][j];
		}
	}
	for (ll i = 0; i < n; i++) {
		ll zero = 0, idx = 0;
		for (ll j = 0; j < m; j++) {
			if (b[i][j] == 0) {
				zero = 1;
				idx = j;
				for (ll k = 0; k < m; k++) {
					a[i][k] = 0;
				}
				for (ll k = 0; k < n; k++) {
					a[k][idx] = 0;
				}
			}
		}
	}
	// for (ll i = 0; i < n; i++) {
	// 	for (ll j = 0; j < m; j++) {
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << '\n';
	// }
	ll nope = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			c[i][j] = 0;
			for (ll k = 0; k < m; k++) {
				if (a[i][k] == 1) {
					c[i][j] = 1;
					break;
				}
			}
			if (c[i][j] != 1) {
				for (ll k = 0; k < n; k++) {
					c[i][j] = c[i][j] | a[k][j];
					if (a[k][j] == 1) {
						c[i][j] = 1;
						break;
					}
				}
			}
			if (c[i][j] != b[i][j]) {
				//cout << c[i][j] << " " << b[i][j] << " " << i << " " << j << endl;
				nope = 1;
				break;
			}
		}
		if (nope == 1) {
			break;
		}
	}
	if (nope == 0) {
		cout << "YES" << '\n';
		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
	}
	else {
		cout << "NO";
	}
	return 0;
}
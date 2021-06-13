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
		ll n, m;
		cin >> n >> m;
		char grid[n][m];
		ll flag = 0, c = 0;
		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < m; j++) {
				cin >> grid[i][j];
				if (grid[i][j] == 'R' && c < 1) {
					c++;
					if (i % 2 == 0) {
						if (j % 2 == 0) {
							flag = 1;
						}
						else {
							flag = 0;
						}
					}
					else {
						if (j % 2 == 0) {
							flag = 0;
						}
						else {
							flag = 1;
						}
					}
				}
				else if (grid[i][j] == 'W' && c < 1) {
					c++;
					if (i % 2 == 0) {
						if (j % 2 == 0) {
							flag = 0;
						}
						else {
							flag = 1;
						}
					}
					else {
						if (j % 2 == 0) {
							flag = 1;
						}
						else {
							flag = 0;
						}
					}
				}
			}
		}
		ll nope = 0;
		for (ll i = 0; i < n; i++) {
			char c, d;
			if (flag == 1 ) {
				if (i % 2 == 0) {
					c = 'R';
					d = 'W';
				}
				else {
					c = 'W';
					d = 'R';
				}
			}
			else {
				if (i % 2 == 0) {
					c = 'W';
					d = 'R';
				}
				else {
					c = 'R';
					d = 'W';
				}
			}
			for (ll j = 0; j < m; j++) {
				if (j % 2 == 0) {
					if (grid[i][j] != d  ) {
						grid[i][j] = c;
					}
					else {
						nope = 1;
						break;
					}
				}
				else {
					if (grid[i][j] != c ) {
						grid[i][j] = d;
					}
					else {
						nope = 1;
						break;
					}
				}

			}
			if (nope == 1) {
				break;
			}
		}
		if (nope == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			for (ll i = 0; i < n; i++) {
				for (ll j = 0; j < m; j++) {
					cout << grid[i][j];
				}
				cout << endl;
			}
		}
	}
	return 0;
}
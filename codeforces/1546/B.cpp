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
	// cout << 20 << endl;
	ll t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		vector<vector<ll>> str(m, vector<ll> (26));
		for (ll i = 0; i < n; i++) {
			string s;
			cin >> s;
			for (ll j = 0; j < m; j++) {
				str[j][s[j] - 'a']++;
			}

		}
		vector<vector<ll>> pair(m, vector<ll> (26));
		for (ll i = 0; i < n - 1; i++) {
			string s;
			cin >> s;
			for (ll j = 0; j < m; j++) {
				pair[j][s[j] - 'a']++;
			}
		}
		for (ll i = 0; i < m; i++) {
			for (ll j = 0; j < 26; j++) {
				if (str[i][j] != pair[i][j]) {
					char ans = 'a' + j;
					cout << ans;
				}
			}
		}
		cout << endl;
	}
	return 0;
}

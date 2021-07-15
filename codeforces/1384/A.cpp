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
	ll t = 1;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> v(n);
		fr(i, 0, n) {
			cin >> v[i];
		}
		vector<string> str(n + 1);
		char add = 'a';
		str[0] = "a";
		for (ll i = 1; i < 200; i++) {
			str[0] += add;
		}
		for (ll i = 0; i < n; i++) {
			str[i + 1] = str[i];
			if (str[i + 1][v[i]] == 'b') {
				str[i + 1][v[i]] = 'a';
			}
			else {
				str[i + 1][v[i]] = 'b';
			}
		}
		for (ll i = 0; i < str.size(); i++) {
			cout << str[i] << endl;
		}

	}
	return 0;
}


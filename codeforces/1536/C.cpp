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
		ll n, d = 0, k = 0;
		cin >> n;
		string s;
		cin >> s;
		map< pair<ll, ll>, ll > mp;
		for (ll i = 0; i < n; i++) {
			char c = s[i];
			if (s[i] == 'D') {
				d++;
			}
			else {
				k++;
			}
			ll a = d, b = k;
			ll gcd = __gcd(a, b);
			a /= gcd;
			b /= gcd;
			mp[ {a, b}]++;
			cout << mp[ {a, b}] << " ";
		}
		cout << '\n';
	}
	return 0;
}
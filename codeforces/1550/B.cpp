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
		ll n, a, b;
		cin >> n >> a >> b;
		string s;
		cin >> s;
		if (b >= 0 ) {
			cout << n*(a + b) << "\n";
		}
		else {
			ll ans = n * a, c = 0;
			char start = s[0], prev = s[0];
			for (ll i = 0; i < n; i++) {
				if (s[i] != start && s[i] != prev) {
					c++;
				}
				prev = s[i];
			}
			c++;
			ans += c * b;
			cout << ans << "\n";
		}
	}
	return 0;
}


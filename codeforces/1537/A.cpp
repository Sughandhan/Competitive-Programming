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
		ll n, sum = 0;
		cin >> n;
		fr(i, 0, n - 1) {
			ll x;
			cin >> x;
			sum += x;
		}
		double mean = sum / (double)n;
		ll ans = 0;
		if (mean == 1.0) {
			ans = 0;
		}
		else if (mean > 1.0) {
			ans = sum - n;
		}
		else {
			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
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
		vector<ll> v(n), ans;
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		if (n == 2) {
			cout << 2 << '\n';
			cout << v[0] << " " << v[1] << "\n";
			continue;
		}
		ans.push_back(v[0]);
		ll flag = 0;
		if (v[0] > v[1]) {
			flag = 0;
		}
		else {
			flag = 1;
		}
		for (ll i = 1; i < n - 1; i++) {
			if (flag == 0) {
				if (v[i] < v[i - 1] && v[i] > v[i + 1]) {
					continue;
				}
				else {
					flag = 1;
					ans.pb(v[i]);
				}
			}
			else {
				if (v[i] > v[i - 1] && v[i] < v[i + 1]) {
					continue;
				}
				else {
					flag = 0;
					ans.pb(v[i]);
				}
			}
		}
		ans.pb(v[n - 1]);
		cout << ans.size() << '\n';
		for (ll i = 0; i < ans.size(); i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
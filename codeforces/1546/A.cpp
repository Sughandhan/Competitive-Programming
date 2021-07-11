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
		ll n;
		cin >> n;
		vector<ll> a(n), b(n);
		ll sum1 = 0, sum2 = 0;
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
			sum1 += a[i];
		}
		for (ll i = 0; i < n; i++) {
			cin >> b[i];
			sum2 += b[i];
		}
		if (sum2 == sum1) {
			map<ll, ll> mp;
			vector<pair<ll, ll>> p;
			ll c = 0;
			for (ll i = 0; i < n - 1; i++) {
				int flag = 0;
				if (a[i] == b[i]) {
					continue;
				}
				else if (a[i] > b[i]) {
					flag = 1;
				}
				else {
					flag = 0;
				}
				for (ll j = i + 1; j < n; j++) {
					if (flag == 0) {
						while (a[j] > b[j] && a[i] < b[i]) {
							c++;
							a[j]--;
							a[i]++;
							p.push_back(make_pair(j + 1, i + 1));
						}
						if (a[i] == b[i]) {
							break;
						}
					}
					else {
						while (a[j] < b[j] && a[i] > b[i]) {
							c++;
							a[j]++;
							a[i]--;
							p.push_back(make_pair(i + 1, j + 1));
						}
						if (a[i] == b[i]) {
							break;
						}
					}
				}
			}
			cout << c << "\n";
			for (ll i = 0; i < p.size(); i++) {
				cout << p[i].first << " " << p[i].second << "\n";
			}
		}
		else {
			cout << -1 << "\n";
		}
	}
	return 0;
}
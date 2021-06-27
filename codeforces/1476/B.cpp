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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		double sum = v[0], cost = 0;
		for (ll i = 1; i < n; i++) {
			ll cal = ceil(v[i] * 100 / sum);
			if (cal > k) {
				double add = ceil((v[i] * 100) / (double) k) - sum;
				cost += add;
				sum += add;
				//sum = ((v[i] * 100) / k);
				sum += v[i];
				//cout << i << " " << cal << " " << add << " " << sum << endl;
			}
			else {
				sum += v[i];
			}
		}
		cout << (ll)cost << '\n';
	}
	return 0;
}
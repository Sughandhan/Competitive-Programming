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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n * k);
		fr(i, 0, n * k) {
			cin >> v[i];
		}
		ll sum = 0, x = n - ceil(n / (double)2);
		ll left = ceil(n / (double)2) - 1;
		ll c = 0;
		for (ll i = v.size() - x - 1; i >= x - 1; i = i - (n - ceil(n / (double) 2) + 1)) {
			if (c == k) {
				break;
			}
			sum += v[i];
			c++;
		}
		cout << sum << endl;
	}
	return 0;
}
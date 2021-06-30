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
	ll t;
	cin >> t;
	while (t--) {
		ll n, r;
		cin >> n >> r;
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		set<ll> s(all(v));
		vector<ll> np(all(s));
		sort(all(np), greater<ll>());
		ll moves = 0, temp = 0;
		for (ll i = 0; i < np.size(); i++) {
			if (np[i] - temp <= 0) {
				break;
			}
			moves++;
			temp += r;
		}
		cout << moves << endl;
	}
	return 0;
}
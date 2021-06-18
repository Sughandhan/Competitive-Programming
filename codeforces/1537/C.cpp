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
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(all(v));
		ll a, b, i1 = 0, i2 = 0, mini = 1e9;
		for (ll i = 0; i < n - 1; i++) {
			if (v[i + 1] - v[i] == 0) {
				a = v[i];
				b = v[i + 1];
				i1 = i;
				i2 = i + 1;
				break;
			}
			else {
				ll diff = v[i + 1] - v[i];
				if (mini > diff) {
					mini = diff;
					a =  v[i];
					b = v[i + 1];
					i1 = i;
					i2 = i + 1;
				}
			}
		}
		cout << a << " ";
		for (ll i = i2 + 1; i < n; i++) {
			cout << v[i] << " ";
		}
		for (ll i = 0; i < i1; i++) {
			cout << v[i] << " ";
		}
		cout << b << '\n';
	}
	return 0;
}
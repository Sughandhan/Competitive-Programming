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


bool func(vector<ll>&v, ll index, ll sum , ll n, ll m ) {
	if (index == n) {
		return sum == m;
	}
	return func(v, index + 1, sum + v[index], n, m) || func(v, index + 1, sum, n, m);
}


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
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		ll sum = accumulate(all(v), (ll)0);
		//cout << sum << endl;
		ll flag = 0;
		for (ll i = 0; i < n; i++) {
			if (v[i] > 1) {
				flag = 1;
			}
		}
		if (flag == 1) {
			ll i = 0;
			while (v[i] == 1) {
				i++;
			}
			if (i % 2 == 0) {
				cout << "First\n";
			}
			else {
				cout << "Second\n";
			}
		}
		else {
			if (n % 2 == 0) {
				cout << "Second\n";
			}
			else {
				cout << "First\n";
			}
		}

	}
	return 0;
}

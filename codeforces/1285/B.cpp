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
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		ll abel = 0, yasser = accumulate(all(v), (ll)0);
		ll max_so_far = INT_MIN, current_max = 0;
		for (ll i = 1; i < n; i++) {
			current_max += v[i];
			if (max_so_far < current_max) {
				max_so_far = current_max;
			}
			if (current_max < 0) {
				current_max = 0;
			}
		}
		abel = max_so_far;
		max_so_far = INT_MIN;
		current_max = 0;
		for (ll i = 0; i < n - 1; i++) {
			current_max += v[i];
			if (max_so_far < current_max) {
				max_so_far = current_max;
			}
			if (current_max < 0) {
				current_max = 0;
			}
		}
		abel = max(max_so_far, abel);
		if (yasser > abel) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}
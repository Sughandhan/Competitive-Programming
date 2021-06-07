// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll q;
	cin >> q;
	while (q--) {
		ll n, m , sum = 0;
		cin >> n >> m;
		n = n / m;
		vector<ll> digits(10);
		for (ll i = 0; i < 10; i++) {
			digits[i] = ((i + 1) * m) % 10;
		}
		for (ll i = 0; i < int(n % 10) ; i++) {
			sum += digits[i];;
		}
		ll res = sum + n / 10 * accumulate(all(digits), (ll) 0);
		cout << res << endl;
	}
	return 0;
}
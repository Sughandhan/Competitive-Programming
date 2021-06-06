// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--) {
		ll k, flag = 0;;
		cin >> k;
		vector< ll > v(k);
		for (ll i = 0; i < k; i++) {
			cin >> v[i];
			if (v[i] < 0) {
				flag = 1;
			}
		}
		if (flag == 1) {
			cout << "NO" << endl;
			continue;
		}
		sort(all(v));
		ll maxi = v[k - 1];
		cout << "YES" << endl;
		cout << maxi + 1 << endl;
		for (ll i = 0; i <= maxi; i++) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
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
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll n, k, c = 0;
	cin >> n >> k;
	vector<ll> v(n), decoy(n), num(k);
	//map<ll, ll> mp;
	vector<pair<ll, ll>> mp(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		decoy[i] = v[i];
		mp[i].first = v[i];
		mp[i].second = i;
	}
	sort(all(mp));

	sort(all(decoy), greater<ll>());

	ll sum = accumulate(decoy.begin(), decoy.begin() + k, (ll)0);

	for (ll i = 0; i < k; i++) {
		num[i] = mp[n - i - 1].second;
	}
	sort(all(num));
	ll prev = 0;
	cout << sum << endl;
	for (ll i = 0; i < k; i++) {
		if (i == k - 1) {
			cout << n - prev ;
		}
		else {
			cout << num[i] + 1 - prev << " ";
		}
		prev = num[i] + 1;
	}
	return 0;
}
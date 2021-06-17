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
	ll n, c = 0;
	cin >> n;
	vector<ll> v(n), num;
	map<ll, ll> mp;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		if (mp[v[i]] == 0) {
			mp[v[i]]++;
			num.push_back(v[i]);
		}
	}
	sort(all(num));
	//cout << num.size();
	// tr(num, it) {
	// 	cout << *it << " ";
	// }
	if (num.size() >= 4) {
		cout << "NO" << '\n';
	}
	else if (num.size() == 1 || num.size() == 2) {
		cout << "YES" << '\n';
	}
	else {
		if (2*num[1] == (num[0] + num[2])) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}
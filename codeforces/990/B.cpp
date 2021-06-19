// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define mp make_pair
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
	ll n, k, ans = 0;
	cin >> n >> k;
	vector<ll> v(n);
	map<ll, ll> mp;
	set<ll> s;
	fr(i, 0, n) {
		cin >> v[i];
		mp[v[i]]++;
		s.insert(v[i]);
	}
	vector<ll> vi(s.begin(), s.end());
	// fr(i, 0, vi.size()) {
	// 	cout << vi[i] << " ";
	// }
	fr(i, 1, vi.size()) {
		if (vi[i - 1] + k >= vi[i]) {
			continue;
			//cout << i << endl;
		}
		else {
			ans += mp[vi[i - 1]];
		}
	}
	ans += mp[vi[vi.size() - 1]];
	cout << ans << '\n';
	return 0;
}
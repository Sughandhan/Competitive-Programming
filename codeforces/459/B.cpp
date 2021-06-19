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
	ll n;
	cin >> n;
	vector<ll> v(n);
	map<ll, ll> mp;
	fr(i, 0, n) {
		cin >> v[i];
		mp[v[i]]++;
	}
	sort(all(v));
	if (v[0] == v[n - 1]) {
		cout << v[n - 1] - v[0] << " " << (n * (n - 1)) / 2;
	}
	else {
		cout << v[n - 1] - v[0] << " " << mp[v[0]]*mp[v[n - 1]];
	}
	return 0;
}
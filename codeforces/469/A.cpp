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
	// cout << 69;
	ll n;
	cin >> n;
	map<ll, ll> mp;
	ll x;
	cin >> x;
	for (ll i = 0; i < x; i++) {
		ll y;
		cin >> y;
		mp[y]++;
	}
	ll z;
	cin >> z;
	for (ll i = 0; i < z; i++) {
		ll y;
		cin >> y;
		mp[y]++;
	}
	ll flag = 0;
	for (ll i = 1; i <= n; i++) {
		if (mp[i] == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout << "I become the guy.";
	}
	else {
		cout << "Oh, my keyboard!";
	}
	return 0;
}

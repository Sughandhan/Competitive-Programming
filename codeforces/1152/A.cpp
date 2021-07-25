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

	ll n, m;
	cin >> n >> m;
	ll o1 = 0, o2 = 0, e1 = 0, e2 = 0;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		if (x % 2 == 0) {
			e1++;
		}
		else {
			o1++;
		}
	}
	for (ll i = 0; i < m; i++) {
		ll x;
		cin >> x;
		if (x % 2 == 0) {
			e2++;
		}
		else {
			o2++;
		}
	}
	cout << min(o1, e2) + min(o2, e1);
	return 0;
}

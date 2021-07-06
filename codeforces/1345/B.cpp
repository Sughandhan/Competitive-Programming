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
	ll h = 0, x = 2;
	vector<ll> v;
	map<ll, ll> mp;
	v.pb(0);
	while (x <= 1e9) {
		h++;
		x = h * 2 + ((h - 1) * (h) * 3) / 2;
		mp[x] = h;
		v.pb(x);
	}
	ll t = 1;
	cin >> t;
	while (t--) {
		ll n, c = 0, id = v.size()-1;
		cin >> n;
		while (n > 0) {
			for (ll i = 1; i <=id; i++) {
				if (v[i] > n) {
					c++;
					n = n - v[i - 1];
					id = i;
					if(i==1){
					    c--;
					}
					break;
				}
			}
			if (id == 1) {
				break;
			}
		}
		cout << c << "\n";
	}
}
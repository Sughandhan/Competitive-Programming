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
	ll n;
	cin >> n;
	string s;
	cin >> s;
	vector<ll> v(n + 1), f(11);
	for (ll i = 1; i < 10; i++) {
		cin >> f[i];
	}
	for (ll i = 1; i <= n; i++) {
		v[i] = s[i - 1] - '0';
	}
	ll flag = 0;
	for (ll i = 1; i <= n; i++) {
		if (flag == 0) {
			// cout << v[i] << " " << f[v[i]] << endl;
			if (v[i] < f[v[i]]) {
				flag = 1;
				v[i] = f[v[i]];
			}
		}
		else {
			// cout << "phase2" << endl;
			// cout << v[i] << " " << f[v[i]] << endl;
			if (v[i] <= f[v[i]]) {
				v[i] = f[v[i]];
			}
			else {
				break;
			}
		}
	}
	for (ll i = 1; i <= n; i++) {
		cout << v[i];
	}
	return 0;
}
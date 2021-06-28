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


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll n = s.size(), cost = 0;
		vector<bool> v(n, 0);
		for (ll i = 1; i < n; i++) {
			bool cur_need = false;
			if (s[i] == s[i - 1] && !v[i - 1]) {
				cur_need = true;
			}
			if (i > 1 && s[i] == s[i - 2] && !v[i - 2]) {
				cur_need = true;
			}
			v[i] = cur_need;
			cost += v[i];
		}
		cout << cost << "\n";
	}
	return 0;
}
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
	ll t; cin >> t;
	while (t--) {
		ll s, i, exp;
		cin >> s >> i >> exp;
		if (s + exp <= i) {
			cout << 0 << '\n';
		}
		else if (s > i) {
			ll copy = i, diff = s - i;
			if (diff > 1) {
				i += min((diff - 1), exp);
				exp -= min((diff - 1), exp);
				i += (exp / 2);
				cout << i - copy + 1 << '\n';
			}
			else {
				i += (exp / 2);
				cout << i - copy + 1 << '\n';
			}
		}
		else {
			ll copy = i, diff = i - s;
			s += min((diff + 1), exp);
			exp -= min((diff + 1), exp);
			i += (exp / 2);
			cout << i - copy + 1 << '\n';
		}
	}
	return 0;
}
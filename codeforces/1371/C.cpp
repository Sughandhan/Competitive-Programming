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
		ll a, b, n, m;
		cin >> a >> b >> n >> m;
		ll type1 = 0, type2 = 0;
		if (a > b) {
			type1 = a;
			type2 = b;
		}
		else {
			type1 = b;
			type2 = a;
		}
		if (type2 >= m && type1 + type2 >= n + m) {
			cout << "Yes" << '\n';
		}
		else {
			cout << "No" << '\n';
		}
	}
	return 0;
}
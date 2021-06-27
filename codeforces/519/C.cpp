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
	ll n, m;
	cin >> n >> m;
	ll c = 0;
	while (n > 0 && m > 0) {
		if (n == 1 && m == 1) {
			break;
		}
		if (n <= m) {
			n = n - 1;
			m = m - 2;
		}
		else {
			n = n - 2;
			m = m - 1;
		}
		c++;
	}
	cout << c;
	return 0;
}

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
	ll t = 1;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		ll diff = abs(a - b);
		if (a == b) {
			cout << 0 << " " << 0 << "\n";
		}
		else if (a < b) {
			cout << diff << " " << min(a % diff, diff - (a % diff))<<"\n";
		}
		else {
			cout << diff << " " << min(b % diff, diff - (b % diff))<<"\n";
		}
	}
	return 0;
}
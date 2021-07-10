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
	// cout << 20 << endl;
	ll t;
	cin >> t;
	while (t--) {
		ll ax, ay, bx, by, fx, fy;
		cin >> ax >> ay >> bx >> by >> fx >> fy;
		ll ans = abs(ax - bx) + abs(ay - by);
		if (fx == ax && fx == bx) {
			if ((fy > ay && fy < by) || (fy < ay && fy > by)) {
				ans += 2;
			}
		}
		else if (fy == ay && fy == by) {
			if ((fx > ax && fx < bx) || (fx < ax && fx > bx)) {
				ans += 2;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
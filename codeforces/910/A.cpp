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
	ll n, d;
	cin >> n >> d;
	string s;
	cin >> s;
	ll i = 0, ans = 0;
	while (i < n - 1) {
		ll j = min(i + d, n - 1), flag = 0;
		for (j = min(i + d, n - 1); j > i; j--) {
			if (s[j] == '1') {
				i = j;
				flag = 1;
				ans++;
				break;
			}
		}
		if (flag == 0) {
			cout << -1;
			return 0;
		}
	}
	cout << ans;
	return 0;
}
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
		ll n;
		cin >> n;
		string s;
		cin >> s;
		if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0') {
			cout << "YES\n";
		}
		else if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0') {
			cout << "YES\n";
		}
		else if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0') {
			cout << "YES\n";
		}
		else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0') {
			cout << "YES\n";
		}
		else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0') {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
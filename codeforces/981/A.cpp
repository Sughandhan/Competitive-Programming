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
	string s;
	cin >> s;
	ll n = s.size(), flag = 1, same = 1;
	for (ll i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i]) {
			flag = 0;
			break;
		}
	}
	for (ll i = 0; i < n - 1; i++) {
		if (s[i] != s[i + 1]) {
			same = 0;
			break;
		}
	}
	if (flag == 0) {
		cout << n;
	}
	else {
		if (same == 1) {
			cout << 0;
		}
		else {
			cout << n - 1;
		}
	}
	return 0;
}
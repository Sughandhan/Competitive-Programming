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
	ll n = 0, c = 0, l = s.size();
	if (l == 1) {
		cout << 0;
	}
	else {
		c++;
		for (ll i = 0; i < l; i++) {
			n += s[i] - '0';
		}
		while (n / 10 != 0) {
			ll sum = 0;
			c++;
			while (n != 0) {
				sum += n % 10;
				n = n / 10;
			}
			n = sum;
		}
		cout << c;
	}
	return 0;
}
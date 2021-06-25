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
	string s;
	cin >> s;
	ll n = s.size();
	map<char, ll> mp;
	for ( ll i = 0; i < n; i++) {
		mp[s[i]]++;
	}
	ll odd = 0, even = 0;
	for (map<char, ll> ::iterator it = mp.begin(); it != mp.end(); it++) {
		if (it->second % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	if (odd <= 1) {
		cout << "First";
	}
	else {
		if (odd % 2 == 1) {
			cout << "First";
		}
		else {
			cout << "Second";
		}
	}
	return 0;
}
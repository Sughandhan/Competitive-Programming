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
	ll n;
	cin >> n;
	string s1, s2;
	cin >> s1;
	cin >> s2;
	ll cost  = 0;
	for (ll i = 0; i < n - 1; i++) {
		if (s1[i] != s2[i]) {
			if (s1[i] == s2[i + 1] && s1[i + 1] == s2[i]) {
				cost += 1;
				s1[i] = s2[i];
				s1[i + 1] = s2[i + 1];

			}
			else {
				s1[i] = s2[i];
				cost++;
			}
		}
	}
	if (s1[n - 1] != s2[n - 1]) {
		s1[n - 1] = s2[n - 1];
		cost++;
	}
	cout << cost;
	return 0;
}
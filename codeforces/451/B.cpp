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
	ll n;
	cin >> n;
	vector<ll> v(n + 2);
	v[0] = 0;
	v[n + 1] = 1e9;
	fr(i, 1, n + 1) {
		cin >> v[i];
	}
	ll i1 = 1, i2 = 1;
	for (ll i = 1; i < n; i++) {
		if (v[i] > v[i + 1]) {
			i1 = i;
			i++;
			while (i < n && v[i] > v[i + 1]) {
				i++;
			}
			i2 = i;
			break;
		}
	}
	//cout << i1 << " " << i2 << endl;
	if (v[i1] < v[i2 + 1] && v[i2] > v[i1 - 1]) {
		ll flag = 0;
		for (ll i = i2 + 1; i < n + 1; i++) {
			if (v[i] > v[i + 1]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << "yes" << '\n';
			cout << i1 << " " << i2 << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
	else {
		cout << "no" << '\n';
	}
	return 0;
}
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
	ll t;
	cin >> t;
	while (t--) {
		ll n, q;
		cin >> n >> q;
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		ll sum = 0, flag = 0;
		if(n==1){
		    sum+=v[0];
		}
		if (flag == 0 && v[0] > v[1]) {
			sum += v[0];
			flag = 1;
		}
		for (ll i = 1; i < n - 1; i++) {
			if (flag == 0) {
				if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
					sum += v[i];
					//cout << sum << " " << v[i] << " " << flag << endl;
					flag = 1;
				}
			}
			else {
				if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
					sum -= v[i];
					//cout << sum << " " << v[i] << " " << flag << endl;
					flag = 0;
				}
			}
		}
		if (flag == 0 && v[n - 1] > v[n - 2]) {
			sum += v[n - 1];
		}
		cout << sum << endl;
	}
	return 0;
}

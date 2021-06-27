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
	ll odd = s[n - 1] - '0', e_c = 0, up = INT_MAX, low = INT_MIN;
	for (ll i = 0; i < n; i++) {
		ll temp = s[i] - '0';
		if (temp % 2 == 0) {
			e_c++;
			if (temp > odd) {
				up = min(temp, up);
			}
			if (temp < odd) {
				low = max(temp, low);
			}
		}
	}
	//cout << up << " " << low << endl;
	if (e_c == 0) {
		cout << -1;
		return 0;
	}
	ll flag = 0;
	if (low == INT_MIN) {
		flag = 1;
	}
	//cout << flag << endl;
	if (flag == 0) {
		for (ll i = 0; i < n; i++) {
			if (s[i] < s[n - 1] && (s[i] - '0') % 2 == 0) {
				swap(s[i], s[n - 1]);
				break;
			}
		}
	}
	else {
		for (ll i = n - 2; i >= 0; i--) {
			if (s[i] > s[n - 1] && (s[i] - '0') % 2 == 0) {
				swap(s[i], s[n - 1]);
				break;
			}
		}
	}
	cout << s;
}

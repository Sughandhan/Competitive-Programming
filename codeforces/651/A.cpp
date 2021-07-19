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


bool func(vector<ll>&v, ll index, ll sum , ll n, ll m ) {
	if (index == n) {
		return sum == m;
	}
	return func(v, index + 1, sum + v[index], n, m) || func(v, index + 1, sum, n, m);
}


ll check(ll num) {
	ll c = 0, copy = num;
	while (num > 0) {
		c += num % 10;
		num = num / 10;
	}
	if (c == 10) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll c = 0;
	vector<ll> dp(2);
	for (ll i = 0; i < 2; i++) {
		cin >> dp[i];
	}
	if (dp[1] == 1 && dp[0] == 1) {
		cout << 0;
		return 0;
	}
	while (dp[0] > 0 && dp[1] > 0) {
		if (dp[0] > dp[1]) {
			dp[1] += 1;
			dp[0] -= 2;
		}
		else {
			dp[1] -= 2;
			dp[0] += 1;
		}
		c++;
	}
	cout << c;
	return 0;
}
// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int fac(int n) {
	int c = 0;
	while (n % 2 == 0) {
		c++;
		n /= 2;
	}
	for (int i = 3; i * i <= n + 1; i += 2) {
		while (n % i == 0) {
			n = n / i;
			c++;
		}
	}
	if (n > 2) {
		c++;
	}
	return c;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	int t;
	cin >> t;
	while (t--) {
		int a, b, k;
		cin >> a >> b >> k;
		if (k == 1 && a == b) {
			cout << "NO" << '\n';
			continue;
		}
		int n, m;
		if (a == b) {
			m = 0;
		}
		else if (__gcd(a, b) == min(a, b)) {
			m = 1;
		}
		else {
			m = 2;
		}
		n = fac(a) + fac(b);
		if (m <= k && k <= n) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}

	}
	return 0;
}
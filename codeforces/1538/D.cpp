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
 
 
const int N = (int)1e5;
vector<int> prime;
vector<int> visit(N, -1);
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	for (int i = 2; i < N; i = i + 2) {
		if (visit[i] == -1) {
			prime.pb(i);
			for (int j = i; j < N; j += i) {
				if (visit[i] == -1) {
					visit[i] = 1;
				}
			}
		}
		if (i == 2) {
			i--;
		}
	}
	int t;
	cin >> t;
	while (t--) {
		int a, b, k;
		cin >> a >> b >> k;
		if (k == 1) {
			if ((a % b == 0 && a != b) || (b % a == 0 && b != a)) {
				cout << "YES" << '\n';
			}
			else {
				cout << "NO" << '\n';
			}
			continue;
		}
		int n, m, a1 = 0, b1 = 0;
		if (a == b) {
			m = 0;
		}
		else if (a % b == 0 || b % a == 0) {
			m = 1;
		}
		else {
			m = 2;
		}
		for (ll i = 0; i < prime.size(); i++) {
			if (prime[i]*prime[i] > a) {
				break;
			}
			if (a % prime[i] == 0) {
				while (a % prime[i] == 0) {
					a1++;
					a = a / prime[i];
				}
			}
		}
		if (a != 1) {
			//	cout << "lola " << t << endl;
			a1++;
		}
		for (ll i = 0; i < prime.size(); i++) {
			if (prime[i]*prime[i] > b) {
				break;
			}
			if (b % prime[i] == 0) {
				while (b % prime[i] == 0) {
					b1++;
					b = b / prime[i];
				}
			}
		}
		if (b != 1) {
			b1++;
			//	cout << "lolb " << t << endl;
		}
		n = a1 + b1;
		//cout << a1 << " " << b1 << " ";
		if (k > n) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << '\n';
		}
 
	}
	return 0;
}
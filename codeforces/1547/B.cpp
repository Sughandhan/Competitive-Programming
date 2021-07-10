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
	// cout << 20 << endl;
	ll t;
	cin >> t;
	while (t--) {
		ll front = 0, back = 0;
		string s;
		char str = 'a';
		cin >> s;
		ll n = s.size();
		ll flag = 0;
		for (ll i = 0; i < n; i++) {
			if (s[i] == str) {
				front = i - 1;
				back = i + 1;
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << "NO" << endl;
		}
		else {
			char add = 'b';
			ll para = 0, ite = 1;
			while (front >= 0 || back < n) {
				// cout << "ITE " << ite << endl;
				int mark = 0;
				if (front >= 0) {
					// cout << "enter front" << endl;
					if (s[front] == add) {
						// cout << front << " " << add << endl;
						add = add + 1;
						mark = 1;
						front--;
					}
				}
				if (back <= n) {
					// cout << "enter back" << endl;
					if (s[back] == add) {
						// cout << back << " " << add << endl;
						add = add + 1;
						back++;
						mark = 1;
					}
				}
				if (mark == 0) {
					para = 1;
					break;
				}
				// ite++;
			}
			if (para == 1) {
				cout << "NO" << "\n";
			}
			else {
				cout << "YES" << "\n";
			}
		}
	}
	return 0;
}
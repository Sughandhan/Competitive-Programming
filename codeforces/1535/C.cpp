// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll count = 0, temp_1 = 0, temp_2 = 0, n = s.length();
		for (ll i = 0; i < n; i++) {
			if (s[i] - '0' == (i % 2) || s[i] == '?') {
				temp_1++;
			}
			else {
				temp_1 = 0;
			}
			if (s[i] - '0' == (i + 1) % 2 || s[i] == '?') {
				temp_2++;
			}
			else {
				temp_2 = 0;
			}
			count += max(temp_1, temp_2);
		}
		cout << count << endl;
	}
	return 0;
}
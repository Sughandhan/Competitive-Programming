#include<bits\stdc++.h>

using namespace std;

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(26);
		char s;
		cin >> s;
		int l  = int(s);
		v[l - 65]++;
		char prev = s;
		for (int i = 1; i < n; i++) {
			cin >> s;
			int l  = int(s);
			if (s != prev) {
				v[l - 65]++;
			}
			prev = s;
		}
		int flag = 0;
		for (int i = 0; i < 26; i++) {
			if (v[i] > 1) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
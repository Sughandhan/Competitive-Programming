// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

int pal( string s, int l) {
	int p = 1;
	for (int i = 0; i < l / 2; i++) {
		if (s[i] != s[l - i - 1]) {
			p = 0;
			break;
		}
	}
	return p;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--) {
		int n, m, flag = 0, cntzero = 0;
		cin >> n;
		string s;
		cin >> s;
		m=n;
		flag = pal(s, s.size());
		while (n--) {
			if (s[n] == '0') {
				cntzero++;
			}
		}
		if (flag == 1) {
			if (cntzero == 1 || cntzero % 2 == 0) {
				cout << "BOB" << endl;
			}
			else {
				cout << "ALICE" << endl;
			}
		}
		else {
			if (m % 2 != 0 && cntzero == 2 && s[m/2]=='0') {
				cout << "DRAW" << endl;
			}
			else {
				cout << "ALICE" << endl;
			}
		}
	}
	return 0;
}
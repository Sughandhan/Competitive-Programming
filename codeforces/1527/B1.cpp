// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--) {
		int n, flag = 0, cntzero = 0;;
		cin >> n;
		char c;
		while (n--) {
			cin >> c;
			if (c == '0') {
				cntzero++;
			}
		}
		if (cntzero == 1 || cntzero % 2 == 0) {
			cout << "BOB" << endl;
		}
		else {
			cout << "ALICE" << endl;
		}
	}
	return 0;
}
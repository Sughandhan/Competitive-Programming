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
		long long int n, len = 0, lead, decoy;
		cin >> n;
		decoy = n;
		int flag = 1;
		while (decoy > 0) {
			len++;
			lead = decoy;
			decoy /= 10;
		}
		decoy = n;
		long long int arr[len];
		arr[0] = decoy % 10;
		decoy /= 10;
		for (long long int i = 1; i < len; i++) {
			arr[i] = decoy % 10;
			decoy /= 10;
			if (arr[i] != arr[i - 1]) {
				flag = 0;
				break;
			}
		}
		//cout << lead << endl;
		char add;
		long long int ans = 9 * len;
		if (lead == 9) {
			ans -= 1;
			add = '9';
		}
		else if (lead == 8) {
			ans -= 2;
			add = '8';
		}
		else if (lead == 7) {
			ans -= 3;
			add = '7';
		}
		else if (lead == 6) {
			ans -= 4;
			add = '6';
		}
		else if (lead == 5) {
			ans -= 5;
			add = '5';
		}
		else if (lead == 4) {
			ans -= 6;
			add = '4';
		}
		else if (lead == 3) {
			ans -= 7;
			add = '3';
		}
		else if (lead == 2) {
			ans -= 8;
			add = '2';
		}
		else if (lead == 1) {
			ans -= 9;
			add = '1';
		}
		if (flag == 1) {
			ans++;
		}
		string s = "";
		for (long long int i = 0; i < len; i++) {
			s = s + add;
		}
		long long int fin = stoi(s);
		if (fin < n) {
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
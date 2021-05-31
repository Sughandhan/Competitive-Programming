// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int h1, a1, c1, h2, a2, heal = c1-a2, ans = 0, ene = 0, add = 0;
	cin >> h1 >> a1 >> c1;
	cin >> h2 >> a2;
	ans = ceil(h2 / (double)a1);
	// cout << " h1 " << h1 << " a1 " << a1 << " c1 " << c1 << " h2 " << h2 << " a2 " << a2 << endl;
	// cout << "ans " << ans << endl;
	ene = ceil(h1 / (double)a2);
	// cout << "ene " << ene << endl;
	if (ene < ans) {
		add= (a2*(ans-1) - h1)/(c1-a2) +1;
	}
	cout << ans + add << endl;
	for (long long int i = 0; i < add; i++) {
		cout << "HEAL" << endl;
	}
	for (long long int i = 0; i < ans; i++) {
		cout << "STRIKE" << endl;
	}
	return 0;
}
// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int d, sumTime = 0, lw = 0, upp = 0;
	cin >> d >> sumTime;
	vector<int> low(d), high(d);
	for (int i = 0; i < d; i++) {
		cin >> low[i] >> high[i];
		lw += low[i];
		upp += high[i];
	}
	if (sumTime >= lw && sumTime <= upp) {
		cout << "YES" << endl;
		sumTime = sumTime - lw;
		for (int i = 0; i < d; i++) {
			int  l = high[i] - low[i];
			int mini = min(l, sumTime);
			low[i] += mini;
			sumTime -= mini;
		}
		for (int i = 0; i < d; i++) {
			cout << low[i] << " ";
		}
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define deb(x) cout<< #x <<" "<< x

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n, upp = 2, idx = 1;
	cin >> n;
	while (idx < n) {
		upp *= 2;
		idx++;
	}
	vector<long long int> v(n), sol(upp);
	for (long long int i = 0; i < n; i++) {
		cin >> v[i];
	}
	long long int flag = 0, level = upp / 2;
	for (long long int i = 0; i < n; i++) {
		flag = 0;
		for (long long int j = 0; j < upp; j++) {
			if (j % level == 0) {
				if (flag == 1) {
					flag = 0;
				}
				else {
					flag = 1;
				}
			}
			if (flag == 0) {
				sol[j] += v[i];
			}
			else {
				sol[j] -= v[i];
			}
		}
		level = level / 2;
	}
	int yes = 0;
	for (long long int i = 0; i < upp; i++) {
		if (sol[i] % 360 == 0) {
			yes = 1;
			break;
		}
	}
	if (yes == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
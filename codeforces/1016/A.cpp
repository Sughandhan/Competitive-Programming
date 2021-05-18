//BATMAN WAS HERE
#include<bits\stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n, m;
	cin >> n >> m;
	vector<long long int> name(n), turns(n);
	cin >> name[0];
	turns[0] = name[0] / m;
	for (long long int i = 1; i < n; i++) {
		cin >> name[i];
		name[i] += name[i - 1] % m;
		turns[i] = name[i] / m;
	}
	for (long long int i = 0; i < n; i++) {
		cout << turns[i] << " ";
	}
	return 0;
}
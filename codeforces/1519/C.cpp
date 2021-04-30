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
		long long int n;
		cin >> n;
		vector<long long int> u(n), sk(n);
		for (long long int i=0; i < n; i++) {
			cin >> u[i];
			u[i]--;
		}
		vector<vector< long long int>> team(n);
		for (long long int i=0; i < n; i++) {
			cin >> sk[i];
			team[u[i]].push_back(sk[i]);
		}
		for (long long int i = 0; i < n; i++) {
			sort(team[i].begin(), team[i].end(), greater<long long int>());
		}
		vector<long long int> sum_skill(n + 1);
		for (long long int i = 0; i < n; i++) {
			long long int l = team[i].size();
			for (long long int k = 1; k < l; k++) {
				team[i][k] += team[i][k - 1];
			}
			for (long long int k = 1; k <= l; k++) {
				sum_skill[k] += team[i][l - 1 - (l % k)];
			}
		}
		for (long long int i = 1; i <=n; i++) {
			cout << sum_skill[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	int t;
	cin >> t;
	while (t--) {
		int n, flag = 0;
		cin >> n;
		for (int i = 0; i < 20; i++) {
			if (n % 11 == 0) {
				flag = 1;
				cout << "YES" << endl;
				break;
			}
			n -= 111;
			if (n < 0 && flag != 1) {
				flag = 0;
				break;
			}
		}
		if (flag == 0) {
			cout << "NO" << endl;
		}
	}
	return 0;
}
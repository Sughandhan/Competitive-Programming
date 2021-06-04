// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int t;
	cin >> t;
	while (t--) {
		long long int s1, s2, s3, s4;
		vector<long long int> v(4);
		cin >> s1 >> s2 >> s3 >> s4;
		v[0] = s1;
		v[1] = s2;
		v[2] = s3;
		v[3] = s4;
		sort(v.begin(), v.end());
		if ( (max(s3, s4) == v[3] && min(s3, s4) == v[2]) || (max(s1, s2) == v[3] && min(s1, s2) == v[2])) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
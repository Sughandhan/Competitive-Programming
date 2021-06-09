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
	string one[26], two[26 * 26], three[26*26*26];
	for (int i = 0; i < 26; i++) {
		one[i] = char('a' + i);
		for (int j = 0; j < 26; j++) {
			two[i*26 + j] = one[i] + char('a' + j);
			for (int k = 0; k < 26; k++) {
			    three[i*26*26 + j*26+ k] = two[j] + char('a' + k);
		    }
		}
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		map<string, int> mp;
		for (int i = 0; i < n; i++) {
			mp[s.substr(i, 1)] = 1;
		}
		for (int i = 0; i < n-1; i++) {
			mp[s.substr(i, 2)] = 1;
		}
		for (int i = 0; i < n-2; i++) {
			mp[s.substr(i, 3)] = 1;
		}
		string ans = "\\";
		for (int i = 0; i < 26; i++) {
			if (mp[one[i]] == 0) {
				ans = one[i];
				break;
			}
		}
		if (ans == "\\") {
			for (int i = 0; i < 26 * 26; i++) {
				if (mp[two[i]] == 0) {
					ans = two[i];
					break;
				}
			}
		}
		if (ans == "\\") {
			for (int i = 0; i < 26 * 26*26; i++) {
				if (mp[three[i]] == 0) {
					ans = three[i];
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
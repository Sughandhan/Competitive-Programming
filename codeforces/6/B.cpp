// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	int n, m;
	char c;
	cin >> n >> m >> c;
	vector<vector<char>> v(n, vector<char>(m));
	vector<pair<int, int>> ver;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == c) {
				ver.push_back(make_pair(i, j));
			}
		}
	}
	map<char, int> mp;
	mp[c] = 1;
	int co = 0;
	for (int i = 0; i < ver.size(); i++) {
		int x = ver[i].first, y = ver[i].second;
		if (x + 1 < n) {
			if (mp[v[x + 1][y]] != 1 && v[x + 1][y] != '.') {
				co++;
				mp[v[x + 1][y]] = 1;
				//cout<<v[x + 1][y]<<endl;
			}
		}
		if (x - 1>=0) {
			if (mp[v[x - 1][y]] != 1 && v[x - 1][y] != '.') {
				co++;
				mp[v[x - 1][y]] = 1;
				//cout<<v[x - 1][y]<<endl;
			}
		}
		if (y + 1 < m) {
			if (mp[v[x][y + 1]] != 1 && v[x][y + 1] != '.') {
				co++;
				mp[v[x][y + 1]] = 1;
				//cout<<v[x][y+1]<<endl;
			}
		}
		if (y - 1>=0) {
			if (mp[v[x][y - 1]] != 1 && v[x][y - 1] != '.') {
				co++;
				mp[v[x][y - 1]] = 1;
				//cout<<v[x ][y-1]<<endl;
			}
		}
	}
	cout << co;
	return 0;
}
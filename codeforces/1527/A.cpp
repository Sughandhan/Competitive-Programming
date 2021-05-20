#include<bits\stdc++.h>
 
using namespace std;
 
int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	long long int t;
	cin >> t;
	while (t--) {
		long long int n, ans, y = 2;
		cin >> n;
		while(y<=n){
		    y*=2;
		}
		y = y/2;
		y--;
		cout<<y<<endl;
	}
	return 0;
}
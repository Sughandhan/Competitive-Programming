#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, x, even = 0, odd = 0;
		cin >> n >> x;
		int y;
		for (int i = 0; i < n; i++) {
			cin >> y;
			if (y % 2 == 1) {
				odd++;
			}
			else {
				even++;
			}
		}
		int flag=0;
		for(int i=1;i<=odd && i<=x; i=i+2){
		    int rem = x-i;
		    if(even>= rem){
		        flag=1;
		        break;
		    }
		}
		if(flag){
		    cout<<"YES"<<endl;
		}
		else{
		    cout<<"NO"<<endl;
		}

	}
	return 0;
}
// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n;
	cin>>n;
	vector<long long int> v(n), w(n);
	for (long long int i = 0; i < n; i++) {
		cin >> v[i];
		w[i] = v[i];
	}
	sort(w.begin(), w.end());
	for (long long int i = 1; i < n; i++) {
		v[i] += v[i - 1];
		w[i] += w[i - 1];
	}
	long long int m;
	cin >> m;
	while (m--) {
		long long int k, l, r;
		cin >> k >> l >> r;
		if (k == 1) {
		    if(l==1){
		        cout<<v[r-1]<<endl;
		    }
		    else{
		        cout << v[r-1] -  v[l - 2] << endl;
		    }
		}
		else {
		    if(l==1){
		        cout << w[r-1] <<endl;
		    }
		    else{
		        cout << w[r-1] -  w[l - 2] << endl;
		    }
		}
	}
	return 0;
}
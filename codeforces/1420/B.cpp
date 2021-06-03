// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while ( t-- ) {
		long long int n, c = 0, idx=0, num=1;
		cin >> n;
		vector<long long int> a(n);
		for (long long int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		long long int maxi=2, mini=2;
		while(maxi<=a[n-1]){
		    maxi*=2;
		    num++;
		}
		vector<long long int> count(num);
		while(mini<=a[0]){
		    mini*=2;
		}
		long long int ixx = 0;
		for(long long int i=mini;i<=maxi;i=i*2){
		    for(long long int j=idx;j<n;j++){
		        if(a[j]<i){
		            count[ixx]++;
		        }
		        else{
		            idx = j;
		            break;
		        }
		    }
		    ixx++;
		}
		for(long long int i=0;i<num;i++){
		    c+= (count[i]*(count[i]-1))/2;
		}
		cout << c << endl;
	}
	return 0;
}
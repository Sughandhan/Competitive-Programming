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
	    long long int n;
	    cin>>n;
	    vector<long long int> v(n), diff(n-1);
	    for(long long int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    long long int sum=0;
	    for(long long int i=0;i<n-1;i++){
	        long long int x = v[i] - v[i+1];
	        diff.push_back(x);
	        if(x>0){
	            sum+= x;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
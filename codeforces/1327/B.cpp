// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long t;
	cin>>t;
	while(t--){
		long long n, flag =0,c, vis_cnt=0, idx=0;
		cin>>n;
		c=1;
		vector<long long> v(n+1, 0);
		while(c<=n){
	        long long k;
	        cin>>k;
	        flag=0;
	        for(long long i=0;i<k;i++){
	            long long x;
	            cin>>x;
	            if(flag!=1 && v[x]!=1){
	                v[x]=1;
	                vis_cnt++;
	               // cout<<x<<endl;
	                flag=1;
	            }
	        }
	        if(flag==0){
	            idx = c;
	        }
	        c++;
		}
		if(vis_cnt==n){
		    cout<<"OPTIMAL"<<endl;
		}
		else{
		    cout<<"IMPROVE"<<endl;
		    cout<<idx<<" ";
		    for(int i=1;i<n+1;i++){
		        if(v[i]==0){
		            cout<<i<<endl;
		            break;
		        }
		    }
		}
	}
	return 0;
}
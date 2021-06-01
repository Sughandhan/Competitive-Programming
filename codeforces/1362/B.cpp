// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long t, x=1;
	cin>>t;
	while(x<=t){
		long long n;
		cin>>n;
		//cout<<"lol"<<endl;
		vector<long long> v, arr(n);
		for(int i=0;i<n;i++){
		    cin>>arr[i];
		}
		sort(arr.begin(), arr.end());
		long long lim = arr[n-1], upp=1;
		while(upp<=lim){
		    upp*=2;
		}
		vector<long long> val(upp+1);
		//cout<<"lol"<<endl;
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        if(i!=j){
		            long long l = arr[i]^arr[j];
		            v.push_back(l);
		            val[l]++;
		        }
		    }
		}
		long long idx_max=0, max=0;
		for(long long int i=0;i<upp+1;i++){
		    if(val[i]>max){
		        max = val[i];
		        idx_max = i;
		    }
		}
		//cout<<"lol"<<endl;
		sort(v.begin(), v.end());
		//if(x==6){
		    if(max!=n){
		        cout<<-1<<endl;
		    }
		    else{
		        cout<<idx_max<<endl;
		    }
		  //  for(int i=0;i<v.size();i++){
		  //      cout<<v[i]<<" ";
		  //  }
		  //  cout<<endl<<v[0]<<endl;
		//}
		x++;
	}
	return 0;
}
// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector< long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll t;
	cin>>t;
	while(t--){
	    ll n, avg = 0;
	    cin>>n;
	    vector<ll> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        avg+=v[i];
	    }
	    if(avg%n!=0){
	        cout<<-1<<endl;
	    }
	    else{
	        avg = avg/n;
	        ll c=0;
	        sort(all(v));
	        for(int i=n-1;i>=0;i--){
	            if(v[i]>avg){
	                c++;
	            }
	            else{
	                break;
	            }
	        }
	        cout<<c<<endl;
	    }
	}
	return 0;
}
// BATMAN WAS HERE
 
#include<bits\stdc++.h>
 
using namespace std;
 
 
#define inf 1000000007
#define pb push_back
#define fr(i,a,b) for(int i=a;i<b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
int main() {
    
	speedup;
	ll n, maxi=0, mini=1e9, ans=0;
	cin>>n;
	vector<pair<ll,ll>> v(n);
	for(ll i=0;i<n;i++){
	    cin>>v[i].first>>v[i].second;
	    if(v[i].second>maxi){
	        maxi =v[i].second;
	    }
	    if(v[i].second<mini){
	        mini = v[i].second;
	    }
	}
	sort(all(v));
	for(ll i=0;i<n;i++){
	    if(ans<=v[i].second){
	        ans = v[i].second;
	    }
	    else{
	        ans = v[i].first;
	    }
	}
	cout<<ans;
    return 0;
}
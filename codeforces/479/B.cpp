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
	ll n, k, maxi=0, mini=10000;
	cin>>n>>k;
	vector<ll> v(n);
	for(ll i=0;i<n;i++){
	    cin>>v[i];
	    if(v[i]>maxi){
	        maxi = v[i];
	    }
	    if(v[i]<mini){
	        mini = v[i];
	    }
	}
	ll moves=0, diff = maxi-mini;
	vector<pair<ll,ll>> mp;
	while(k--){
	    ll low = min_element(all(v)) - v.begin();
	    ll up = max_element(all(v)) - v.begin();
	    v[up]--;
	    v[low]++;
	    ll n_low = min_element(all(v)) - v.begin();
	    ll n_up = max_element(all(v)) - v.begin();
	    if(up==low){
	        break;
	    }
	    if(v[n_up]-v[n_low]<=diff){
	        diff = v[n_up]-v[n_low];
	        moves++;
	        mp.push_back(make_pair(up, low));
	    }
	    else{
	        break;
	    }
	   // deb(diff);
	   // cout<<endl;
	}
	cout<<diff<<" "<<moves<<'\n';
	for(ll i=0;i<mp.size();i++){
	    cout<<mp[i].first+1<<" "<<mp[i].second+1<<'\n';
	}
    return 0;
}
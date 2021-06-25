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
	ll n;
	cin>>n;
	vector<ll> v1(n), v2(n), v(2*n);
// 	ll vi1[n];
// 	ll vi2[n];
	map<ll, ll> mp1, mp2, mp, a1, a2;
	ll arr1[n];
	ll arr2[n];
	for(ll i=0;i<n;i++){
	    cin>>v1[i];
	    cin>>v2[i];
	    v[2*i] = v1[i];
	    v[2*i+1] = v2[i];
	    mp1[v1[i]] = 0;
	    mp2[v2[i]] = 0;
	    a1[v1[i]] = 0;
	    a2[v2[i]] = 0;
	    mp[v1[i]] = 1;
	    mp[v2[i]] = 2;
	}
	sort(all(v));
// 	for(ll i=0;i<v2.size();i++){
// 	    cout<<v2[i]<<" ";
// 	}
// 	cout<<endl;
	for(ll i=0;i<n;i++){
	    if(mp[v[i]]==1){
	        mp1[v[i]]=1;
	    }
	    else{
	        mp2[v[i]]=1;
	    }
	}
	for(ll i=0;i<n/2;i++){
	    mp1[v1[i]]=1;
	    mp2[v2[i]]=1;
	}
	for(ll i=0;i<n;i++){
	    if(mp1[v1[i]]==1){
	        cout<<1;
	    }
	    else{
	        cout<<0;
	    }
	}
	cout<<endl;
	for(ll i=0;i<n;i++){
	    if(mp2[v2[i]]==1){
	        cout<<1;
	    }
	    else{
	        cout<<0;
	    }
	}
    return 0;
}

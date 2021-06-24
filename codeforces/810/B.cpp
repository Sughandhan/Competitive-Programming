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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	ll n, f, sum=0;
	cin>>n>>f;
	vector<ll> v;
	v.pb(0);
	while(n--){
	    ll k,l;
	    cin>>k>>l;
	    if(k>=l){
	        sum+=l;
	    }
	    else{
	        sum+=k;
	        v.pb(min(k, l-k));
	    }
	}
	sort(all(v));
	ll id =v.size()-1;
	if(v[id]==0){
	    cout<<sum;
	}
	else{
	    while(f>0 && id>=0){
	        sum+= v[id];
	        id--;
	        f--;
	    }
	    cout<<sum;
	}
    return 0;
}
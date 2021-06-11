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
	    ll n, l, r, a=0, b=0, ans = 0;
	    cin>>n>>l>>r;
	    ll diff = r-l;
	    vector<ll> v(n);
	    for(ll i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(all(v));
	    for(ll i=0;i<n;i++){
	        b = r-v[i];
	        auto up = upper_bound(v.begin() + i+1, v.end(), b);
	        a = l-v[i];
	        auto low = lower_bound(v.begin()+i+1, v.end(), a);
	        ans+= (up-low);
	    }
	    cout<<ans<<endl;
 	}
	return 0;
}
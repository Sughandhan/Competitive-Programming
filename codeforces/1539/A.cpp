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
	int k;
	cin>>k;
	while(k--){
	    ll n, x, t;
	    cin>>n>>x>>t;
	    ll ans = max(0ll, n-(t/x))*(t/x), val = min(n,(t/x));
	    ans+= (val*(val-1))/2;
	    cout<<ans<<endl;
	}
    return 0;
}

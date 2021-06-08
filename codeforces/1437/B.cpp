// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
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
	cin >> t;
	while (t--) {
		ll n, ones=0, zeros = 0 ;
		cin>>n;
		string s;
		cin>>s;
		for(ll i=0;i<n-1;i++){
		    if(s[i]==s[i+1] && s[i]=='0'){
		        ones++;
		    }
		    else if(s[i]==s[i+1] && s[i]=='1'){
		        zeros++;
		    }
		}
		cout<<max(ones, zeros)<<endl;
	}
	return 0;
}
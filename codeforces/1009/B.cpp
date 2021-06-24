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
	string s;
	cin>>s;
	
	ll n = s.size(), flag=1;
	string cp;
	
	ll c=0;
	ll t=1e5 +1;
	//cout<<t;
	vector<char> v;
	for(ll i=0;i<n;i++){
	    if(s[i]=='1'){
	        c++;
	    }
	    else{
	        v.pb(s[i]);
	        if(s[i]=='2' && t == 1e5 +1){
	            t =v.size()-1;
	        }
	    }
	}
	if(t== 1e5 +1){
	    if(v.size()==0){
	        t =0;
	    }
	    else{
	        t = v.size();
	    }
	}
	for(ll i=0;i<t;i++){
	    cp+= v[i];
	}
	for(ll i=0;i<c;i++){
	    cp+= '1';
	}
	for(ll i=t;i<v.size();i++){
	    cp+= v[i];
	}
	cout<<cp;
    return 0;
}

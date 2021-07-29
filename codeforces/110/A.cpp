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
#define N 100005



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	// cout << 69;
	string s;
	cin>>s;
	ll c=0;
	for(ll i=0;i<s.size();i++){
	    if(s[i]=='4'){
	        c++;
	    }
	    else if(s[i]=='7'){
	        c++;
	    }
	}
	if(c==4 || c==7){
	    cout<<"YES\n";
	}
	else{
	    cout<<"NO\n";
	}
	return 0;
}


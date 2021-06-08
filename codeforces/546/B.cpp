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
	ll n, c=0;
	cin >> n;
	vector< ll > v(n), s(n);
	for( ll i=0;i<n;i++){
	    cin>>v[i];
	}
	sort(all(v));
	for(ll i=0;i<n-1;i++){
	    if(v[i]<v[i+1]){
	        continue;
	    }
	    else if(v[i]==v[i+1]){
	        v[i+1]++;
	        c++;
	    }
	    else{
	        ll add = v[i]- v[i+1] +1;
	        c+=add;
	        v[i+1] += add;
	    }
	}
	cout<<c;
	return 0;
}
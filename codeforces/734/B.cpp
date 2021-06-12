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
	ll k2, k3, k5, k6;
	cin>>k2>> k3>> k5>> k6;
	ll a = 0, b=0;
	a = min({k2,k5, k6});
	k2=k2-a;
	b = min(k2, k3);
	cout<<( 256*a + 32*b);
	return 0;
}
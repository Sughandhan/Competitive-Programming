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
	int n, m, f=0, p=0, ans=-1;
	cin>>n>>m;
	vector<int> pass(n), decoy(n), fail(m);
	for(int i=0;i<n;i++){
	    cin>>pass[i];
	    decoy[i] = pass[i];
	}
	int flag=0;
	for(int i=0;i<m;i++){
	    cin>>fail[i];
	}
	f = *min_element(all(fail));
	sort(all(pass));
	sort(all(decoy));
	p = pass[n-1];
	if(max(2*pass[0], p) < f ){
	    ans = max(2*pass[0], p);
	}
	cout<<ans;
	return 0;
}
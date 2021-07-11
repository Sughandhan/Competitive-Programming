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
	// cout << 20 << endl;
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i];
		}
		ll maxi = *max_element(all(v));
		vector<ll> even(maxi+1), odd(maxi+1);
		for(ll i=0;i<n;i++){
			if(i%2==0){
				even[v[i]]++;
			}
			else{
				odd[v[i]]++;
			}
		}
		sort(all(v));
		ll flag=0;
		for(ll i=0;i<n;i++){
			if(i%2==0){
				if(even[v[i]]==0){
					flag=1;
					break;
				}
				else{
					even[v[i]]--;
				}
			}
			else{
				if(odd[v[i]]==0){
					flag=1;
					break;
				}
				else{
					odd[v[i]]--;
				}
			}
		}
		if(flag==1){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
	return 0;
}